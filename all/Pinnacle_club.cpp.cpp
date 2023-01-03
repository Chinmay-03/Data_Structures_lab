/*
Department of Computer Engineering has student&#39;s club named
&#39;Pinnacle Club&#39;. Students of second, third and final year of
department can be granted membership on request. Similarly
one may cancel the membership of club. First node is reserved
for president of club and last node is reserved for secretary of
club. Write C++ program to maintain club member‘s information
using singly linked list. Store student PRN and Name. Write
functions to:
a) Add and delete the members as well as president or even
secretary.
b) Compute total number of members of club
c) Display members
d) Two linked lists exists for two divisions. Concatenate two
lists.
*/

/*
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
*/


#include<iostream>
using namespace std;

class node
{
	public:
		string PRN, name;
		node *next;
};

class list
{
	public:
		int i,j,k,count=0,position;
		node *new_member, *President, *temp,*q;
		list()
		{
			President=NULL;
		}
		
		void add_end(string PRN, string name)
		{
			new_member=new(node);
			new_member->PRN=PRN;
			new_member->name=name;
			new_member->next=NULL;
			if(President==NULL)
			{
				President=new_member;
			}
			else
			{
				for(temp=President;temp->next!=NULL;temp=temp->next)
				{
					
				}
				temp->next=new_member;
			}
				
		}
		void add_begin(string PRN, string name)
		{
			new_member=new(node);
			new_member->PRN=PRN;
			new_member->name=name;
			new_member->next=NULL;
			if(President==NULL)
			{
				President=new_member;
			}
			new_member->next=President;
			President=new_member;
		}
		void add_any(string PRN, string name)
		{
			for(temp=President;temp!=NULL;temp=temp->next)
			{
				count++;
			}
			cout<<"\nThe count is : "<<count;
			cout<<"\nEnter the position : ";
			cin>>position;
			if(position>0 && position<=count)
			{
				new_member=new(node);
				new_member->PRN=PRN;
				new_member->name=name;
				new_member->next=NULL;
				temp=President;
				for(i=1;i<position-1;i++)
				{
					temp=temp->next;
				}
				new_member->next=temp->next;
				temp->next=new_member;
			}
			else
			{
				cout<<"\nInvalid position!";
			}
		}
		
		void del_end()
		{
			for(temp=President;temp!=NULL;temp=temp->next)
			{
				count++;
			}
			cout<<"\nThe count is : "<<count;
			temp=President;
				for(i=1;i<count-1;i++)
				{
					temp=temp->next;
				}
				q=temp->next;
				delete(q);
				temp->next=NULL;
				cout<<"\nThe Secretary is deleted!";
		}
		
		void del_begin()
		{
			temp=President;
			President=President->next;
			delete(temp);
			cout<<"\nPresident is deleted!";
		}
		
		void del_any()
		{
			for(temp=President;temp!=NULL;temp=temp->next)
			{
				count++;
			}
			cout<<"\nThe count is : "<<count;
			cout<<"\nEnter the position : ";
			cin>>position;
			if(position>0 && position<=count)
			{
				temp=President;
				for(i=1;i<position-1;i++)
				{
					temp=temp->next;
				}
				q=temp->next;
				temp->next=q->next;
				delete(q);
				cout<<"\nThe member is deleted!";
			}
			else
			{
				cout<<"\nInvalid position!";
			}
		}
		
		void total()
		{
			
			for(temp=President;temp!=NULL;temp=temp->next)
			{
				count++;
			}
			cout<<"\nThe total number of members of club is : "<<count;
		}
		
		void display()
		{
			temp=President;
			cout<<"\nPRN"<<"\tName"<<"\tPost";
			cout<<"\n"<<temp->PRN<<"\t"<<temp->name<<"\t"<<"President";
			while(temp->next!=NULL)
			{
				cout<<"\nPRN"<<"\tName"<<"\tPost";
				cout<<"\n"<<temp->PRN<<"\t"<<temp->name<<"\t"<<"Member";
				temp=temp->next;
			}
			cout<<"\nPRN"<<"\tName"<<"\tPost";
			cout<<"\n"<<temp->PRN<<"\t"<<temp->name<<"\t"<<"Secretary";
			
		}
		
		list operator +(list l2)
		{
			list l3;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=l2.President;
			l3.President=President;
			return l3;
		}
		
};

int main()
{
	list l1,l2,l3;
	string PRN,name;
	int option,press;
	char ch;
	do
	{
		cout<<"\n1.Add Secretary\n2.Add President\n3.Add any Member\n4.Delete Secretary\n5.Delete President\n6.Delete any Member\n7.Total members\n8.Display\n9.Concatenate two LL";
		cout<<"\nEnter your choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
			
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					cout<<"\nEnter PRN and name respectively : ";
					cin>>PRN>>name;
					l1.add_end(PRN,name);
				}
				else if(ch=='N'||ch=='n')
				{
					l2.add_end(PRN,name);
				}
				
				break;
				
			case 2:
				cout<<"\nEnter PRN and name respectively : ";
				cin>>PRN>>name;
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					l1.add_begin(PRN,name);
				}
				else if(ch=='N'||ch=='n')
				{
					l2.add_begin(PRN,name);
				}
				
				break;
				
			case 3:
				cout<<"\nEnter PRN and name respectively : ";
				cin>>PRN>>name;
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					l1.add_any(PRN,name);
				}
				else if(ch=='N'||ch=='n')
				{
					l2.add_any(PRN,name);
				}
				
				break;
				
			case 4:
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					l1.del_end();
				}
				else if(ch=='N'||ch=='n')
				{
					l2.del_end();
				}
				
				break;
				
			case 5:
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					l1.del_begin();
				}
				else if(ch=='N'||ch=='n')
				{
					l2.del_begin();
				}
				
				break;
				
			case 6:
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					l1.del_any();
				}
				else if(ch=='N'||ch=='n')
				{
					l2.del_any();
				}
				
				break;
				
			case 7:
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					l1.total();
				}
				else if(ch=='N'||ch=='n')
				{
					l2.total();
				}
				
				break;
				
			case 8:
				cout<<"\nFirst List (Y) or Second List (N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					l1.display();
				}
				else if(ch=='N'||ch=='n')
				{
					l2.display();
				}
				
				break;
				
			case 9:
				cout<<"\nAfter Concatenation :\n ";
				l3=l1+l2;
				l3.display();
				
				break;
				
		}
		cout<<"\nWant to continue? Press 1 : ";
		cin>>press;
	}
	while(press==1);
}


















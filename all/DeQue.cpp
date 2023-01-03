/*A double-ended queue (deque) is a linear list in which additions
and deletions may be made at either end. Obtain a data
representation mapping a deque into a one- dimensional array.
Write C++ program to simulate deque with functions to add and
delete elements from either end of the deque.*/

/*NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
*/


#include<iostream>
using namespace std;
#define N 5

class DeQ
{
	public:
		int queue[N];
		int front=-1;
		int rear=-1;
		void add_front(int x)
		{
			if(front==-1)
			{
				front=0;
				queue[++rear]=x;
			}
			else if(front!=0)
			{
				queue[--front]=x;
			}
			else
			{
				cout<<"\nOverflowed!";
			}
		}
		
		void add_rear(int x)
		{
			if(rear==N-1)
			{
				cout<<"\nOverflowed!";
			}
			else if(front==-1 && rear==-1)
			{
				front=rear=0;
				queue[rear]=x;
			}
			else
			{
				rear++;
				queue[rear]=x;
			}
		}
		
		void del_front()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nUnderflowed!";
			}
			else if(front==rear)
			{
				front=rear=-1;
			}
			else
			{
				cout<<"\nDeleted element : "<<queue[front];
				front++;
			}
		}
		
		void del_rear()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nUnderflowed!";
			}
			else if(front==rear)
			{
				front=rear=-1;
			}
			else
			{
				cout<<"\nDeleted element : "<<queue[rear];
				rear--;
			}
		}
		
		void display()
		{
			int i;
			if(front==-1 && rear==-1)
			{
				cout<<"DeQue is Empty!";
			}
			else
			{
				cout<<"\nThe DeQue is : ";
				for(i=front;i<=rear;i++)
				{
					cout<<" "<<queue[i];
				}
			}
		}
};


int main()
{
	DeQ de;
	int option,ch,data;
	do
	{
		cout<<"\n1.Insert at front\n2.Insert at rear\n3.Delete front\n4.Delete rear\n5.Display DeQue";
		cout<<"\nEnter your choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"\nEnter your data : ";
				cin>>data;
				de.add_front(data);
				cout<<"\nThe updated DeQue is : ";
				de.display();
				break;
				
			case 2:
				cout<<"\nEnter your data : ";
				cin>>data;
				de.add_rear(data);
				cout<<"\nThe updated DeQue is : ";
				de.display();
				break;
				
			case 3:
				de.del_front();
				cout<<"\nThe updated DeQue is : ";
				de.display();
				break;
				
			case 4:
				de.del_rear();
				cout<<"\nThe updated DeQue is : ";
				de.display();
				break;
				
			case 5:
				de.display();
				break;
				
		}
		cout<<"\nWnat to continue? Press 1 : ";
		cin>>ch;
		
	}
	while(ch==1);
	return 0;
}

/*OUTPUT:
1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 1

Enter your data : 23

The updated DeQue is :
The DeQue is :  23
Wnat to continue? Press 1 : 1

1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 2

Enter your data : 34

The updated DeQue is :
The DeQue is :  23 34
Wnat to continue? Press 1 : 1

1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 2

Enter your data : 67

The updated DeQue is :
The DeQue is :  23 34 67
Wnat to continue? Press 1 : 1

1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 2

Enter your data : 78

The updated DeQue is :
The DeQue is :  23 34 67 78
Wnat to continue? Press 1 : 1

1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 3

Deleted element : 23
The updated DeQue is :
The DeQue is :  34 67 78
Wnat to continue? Press 1 : 1

1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 4

Deleted element : 78
The updated DeQue is :
The DeQue is :  34 67
Wnat to continue? Press 1 : 1

1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 3

Deleted element : 34
The updated DeQue is :
The DeQue is :  67
Wnat to continue? Press 1 : 1

1.Insert at front
2.Insert at rear
3.Delete front
4.Delete rear
5.Display DeQue
Enter your choice : 4

The updated DeQue is : DeQue is Empty!
*/













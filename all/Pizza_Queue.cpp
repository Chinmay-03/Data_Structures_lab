/*Pizza parlor accepting maximum M orders. Orders are served in first come first served basis. Order once placed cannot be cancelled. Write C++ program to simulate the system using circular queue using array.
*/

/*
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
*/

#include<iostream>
using namespace std;
#define N 5

class Pizza
{
	public:
		int queue[N];
		int front=-1;
		int rear=-1;
		
		void enqueue(int x)
		{
			if(front==-1 && rear==-1)
			{
				front=rear=0;
				queue[rear]=x;
			}
			else if((rear+1)%N==front)
			{
				cout<<"\nOrders are full!";
				
			}
			else
			{
				rear=(rear+1)%N;
				queue[rear]=x;
			}
		}
		
		void dequeue()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nAll Orders are served!";
			}
			else if(front==rear)
			{
				cout<<"\nNow, the order served is : "<<queue[front];
				front=rear=-1;
			}
			else
			{
				cout<<"\nNow, the order served is : "<<queue[front];
				front=(front+1)%N;
			}
		}
		
		void display()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nAll Orders are served!";
			}
			else
			{
				cout<<"\nOrders placed : ";
				int i=front;
				while(i!=rear)
				{
					cout<<queue[i];
					i=(i+1)%N;
				}
				cout<<" "<<queue[rear];
			}
		}
		
		void get_front()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nAll Orders are served!";
			}
			else
			{
				cout<<"\nNext Serving : "<<queue[front];
			}
		}
};

int main()
{
	Pizza pi;
	int option,ch;
	int choice;
	int data;
	do
	{
		cout<<"\n1.Place your order\n2.Serve Orders\n3.Next order\n4.All orders";
		cout<<"\nEnter your choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"\nEnter your order number : ";
				cin>>data;
				pi.enqueue(data);
				pi.display();
				break;
				
			case 2:
				pi.dequeue();
				//cout<<"\nThe updated Queue : ";
				pi.display();
				break;
				
			case 3:
				pi.get_front();
				break;
				
			case 4:
				pi.display();
				break;
		}
		cout<<"\nWant to continue? Press 1 : ";
		cin>>ch;
	}
	while(ch==1);
	return 0;
}

/*OUTPUT:
1.Place your order
2.Serve Orders
3.Next order
4.All orders
Enter your choice : 1

Enter your order number : 1

Orders placed :  1
Want to continue? Press 1 : 1

1.Place your order
2.Serve Orders
3.Next order
4.All orders
Enter your choice : 1

Enter your order number : 2

Orders placed : 1 2
Want to continue? Press 1 : 1

1.Place your order
2.Serve Orders
3.Next order
4.All orders
Enter your choice : 1

Enter your order number : 3

Orders placed : 12 3
Want to continue? Press 1 : 1

1.Place your order
2.Serve Orders
3.Next order
4.All orders
Enter your choice : 2

Now, the order served is : 1
Orders placed : 2 3
Want to continue? Press 1 : 1

1.Place your order
2.Serve Orders
3.Next order
4.All orders
Enter your choice : 3

Next Serving : 2
Want to continue? Press 1 : 1

1.Place your order
2.Serve Orders
3.Next order
4.All orders
Enter your choice : 4

Orders placed : 2 3
*/










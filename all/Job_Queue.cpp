/*Queues are frequently used in computer programming, and a
typical example is the creation of a job queue by an operating
system. If the operating system does not use priorities, then the
jobs are processed in the order they enter the system. Write C++
program for simulating job queue. Write functions to add job and
delete job from queue.*/

/*
NAME: PRIYANKA LALITKUMAR PATIL
CLASS: SE-B
ROLL NO.: 44
*/


#include<iostream>
using namespace std;

#define N 5

class Job
{
	public:
		int queue[N];
		int front=-1;
		int rear=-1;
		void enqueue(int x)
		{
			if(rear==N-1)
			{
				cout<<"\nOverflow Error!";
			}
			else if(front==-1 && rear==-1)
			{
				front=rear=0;
				queue[rear]=x;
				cout<<"\nJob is added!";
			}
			else
			{
				rear++;
				queue[rear]=x;
				cout<<"\nJob is added!";
			}
		}
		
		void dequeue()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nUnderflow Error!";
			}
			else if(front==rear)
			{
				cout<<"\nDeleted Job is : "<<queue[front];
				front=rear=-1;
			}
			else
			{
				cout<<"\nDeleted Job is : "<<queue[front];
				front++;
			}
		}
		
		void display()
		{
			int i;
			if(front==-1 && rear==-1)
			{
				cout<<"\nNo Job is queued!";
			}
			else
			{
				cout<<"\nThe Job Queue is : ";
				for(i=front;i<=rear;i++)
				{
					cout<<" "<<queue[i];
				}
			}
		}
		
		void front_job()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nNo Job is queued!";
			}
			else
			{
				cout<<"\nThe front Job is : "<<queue[front];
			}
		}
};

int main()
{
	Job job;
	int option,ch,data;
	do
	{
		cout<<"\n1.Add Job\n2.Delete Job\n3.Get front Job\n4.Display Queue";
		cout<<"\nEnter your choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"\nEnter the Job you want to add : ";
				cin>>data;
				job.enqueue(data);
				cout<<"\nThe updated Queue : ";
				job.display();
				break;
				
			case 2:
				job.dequeue();
				cout<<"\nThe updated Queue : ";
				job.display();
				break;
				
			case 3:
				job.front_job();
				break;
				
			case 4:
				job.display();
				break;
		}
		cout<<"\nWant to continue? Press 1 : ";
		cin>>ch;
	}
	while(ch==1);
	return 0;
}

/*OUTPUT:
1.Add Job
2.Delete Job
3.Get front Job
4.Display Queue
Enter your choice : 1

Enter the Job you want to add : 12

Job is added!
The updated Queue :
The Job Queue is :  12
Want to continue? Press 1 : 1

1.Add Job
2.Delete Job
3.Get front Job
4.Display Queue
Enter your choice : 1

Enter the Job you want to add : 23

Job is added!
The updated Queue :
The Job Queue is :  12 23
Want to continue? Press 1 : 1

1.Add Job
2.Delete Job
3.Get front Job
4.Display Queue
Enter your choice : 1

Enter the Job you want to add : 45

Job is added!
The updated Queue :
The Job Queue is :  12 23 45
Want to continue? Press 1 : 1

1.Add Job
2.Delete Job
3.Get front Job
4.Display Queue
Enter your choice : 2

Deleted Job is : 12
The updated Queue :
The Job Queue is :  23 45
Want to continue? Press 1 : 1

1.Add Job
2.Delete Job
3.Get front Job
4.Display Queue
Enter your choice : 3

The front Job is : 23
Want to continue? Press 1 : 1

1.Add Job
2.Delete Job
3.Get front Job
4.Display Queue
Enter your choice : 4

The Job Queue is :  23 45
*/








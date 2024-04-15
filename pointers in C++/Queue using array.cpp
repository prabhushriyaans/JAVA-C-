#include<iostream>
using namespace std;
class Queue
{
	int ms;
	int data[1000];
	int front,rear;
	public:
	Queue(int s)
	{
		ms=s;
		data[ms];
		front=rear=-1;

	}
	bool empty()
	{
		return front==-1;
	}
	bool full()
	{
		return rear==ms-1;
	}
	void enqueue(int e)
	{
		if(full())
		{
			cout<<"The queue is full."<<endl;
			return;
		}
		else if(empty())
		{
			front=rear=0;
		}
		else
		{
			rear++;
		}
		data[rear]=e;
	}
	void dqueue()
	{
		if(empty())
		{
			cout<<"The queue is empty."<<endl;
			return;
		}
		else if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
	}
	int fvalue()
	{
		if(empty())
		{
			cout<<"The queue is empty."<<endl;
			return -1;
		}
		return data[front];
	}
};
int main()
{
	Queue Q(20);
	int e,n;
	cout<<"enter the total number of elements you want to add to the queue."<<endl;
	cin>>n;
	cout<<"Enter the elements."<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>e;
		Q.enqueue(e);
	}
	while(!Q.empty())
	{
	cout<<"Front element."<<Q.fvalue()<<endl;
	Q.dqueue();
	}

}

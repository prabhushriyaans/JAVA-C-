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
		return (front==-1&& rear==-1);
	}
	bool full()
	{
		return ((rear+1)%ms==front);
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
			rear=(rear+1)%ms;
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
			front=(front+1)%ms;
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
	int e,n,sz;
	cout<<"Enter the actual size of the queue."<<endl;
	cin>>sz;
	Queue Q(sz);
	cout<<"enter the total number of elements you want to add to the queue."<<endl;
	cin>>n;
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
	
//	cout<<"Front element."<<Q.fvalue()<<endl;
}

#include<iostream>
using namespace std;
class Queue
{
	int ms,nms;
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
	void fqueue(int e)
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
		else if(rear>front)
		{
		  rear++;
		  for(int i=rear;i>=front;i--)
		  {
		  	data[i+1]=data[i];
		  }
		  
		}
		data[front]=e;
		
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
		void rdqueue()
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
			rear--;
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
	int rvalue()
	{
		if(empty())
		{
			cout<<"The queue is empty."<<endl;
			return -1;
		}
		return data[rear];
	}
};
int main()
{
	Queue Q(20);
	int e,n,O,c;
	cout<<"enter the total number of elements you want to add to the queue."<<endl;
	cin>>n;
	cout<<"Enter the elements of the Queue"<<endl;
	for(int i=0;i<n;i++)
	{
		
		cin>>e;
		Q.enqueue(e);
	}
	cout<<endl<<"Do you want to add more  elements to the front of queue."<<endl;
		cout<<"1.yes"<<endl;
		cout<<"2.no"<<endl;
		cin>>O;
		switch(O)
		{
			case 1:
			cout<<"Enter the number of element you want to add."<<endl;
			cin>>c;
			cout<<"Enter the elements"<<endl;
			for(int i=0;i<c;i++)
	        {
		
		      cin>>e;
		      Q.fqueue(e);
	        }
	        break;
	        case 2:
	        cout<<"end"<<endl;
		}
		cout<<"what you want ."<<endl;
		cout<<"1.Front queue"<<endl;
		cout<<"2.back queue"<<endl;
		cin>>c;
		switch(c)
		{
			case 1:
			while(!Q.empty())
		{
			cout<<"Front element."<<Q.fvalue()<<endl;
	        Q.dqueue();
		}
		     break;
		    case 2:
			while(!Q.empty())
		{
			cout<<"Front element."<<Q.rvalue()<<endl;
	        Q.rdqueue();
		} 
		}
	
	
 
}

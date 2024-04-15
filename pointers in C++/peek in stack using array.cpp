#include<iostream>
using namespace std;
class stack
{
	int maxsize;
	int ptop;
	int *data;
	public:
	stack(int size)
	{
		maxsize=size;
		ptop=-1;
		data= new int[maxsize];
	}
	~stack()
	{
		delete[] data;
	}
	bool isempty()
	{
		return ptop==-1;
	}
	bool isfull()
	{
		return ptop==maxsize-1;
	}
	void push(int e)
	{
		if(isfull())
		{
			cout<<"Futher elements can't be pushed."<<endl;
			return;
		}
		++ptop;
			data[ptop]=e;
	}
	void pop()
	{
		if(isempty())
		{
			cout<<"The stack is empty."<<endl;
			return;
		}
			--ptop;
	}
	int top()
	{
			if(isempty())
		{
			cout<<"The stack is empty."<<endl;
			return -1;
		}
			return data[ptop];
	}
		int peek(int i)
	{
	   // stack *PO=s;
	   //int *OP=data;
	    int vl;
	    if(i<0 )
	    {
	        cout<<"invalid peek."<<endl;
	        return -1;
	    }
	    else if(i>ptop)
	    {
	    	return ptop;
		}
	    else 
	    {
	    	vl=ptop-i+1;
	        return data[vl];
	    }
	}
};
int main()
{
	int e,n,O,j;
	stack S(20);
//	S.push(10);
//	S.push(20);
//	S.push(30);
	cout<<"Enter the number of elements you want to add to the stack."<<endl;
	cin>>n;
	cout<<"Enter the elements."<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>e;
		S.push(e);
	}
	cout<<endl<<"do you want to have a look of a perticular element of stack?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.no"<<endl;
	cin>>O;
   switch(O)
   {
   	case 1:
   		cout<<"Enter the index of the element."<<endl;
   	cin>>j;
   		cout<<endl<<S.peek(j);
   		break;
   		case 2:
   		cout<<"End."<<endl;
   		break;
   }
}

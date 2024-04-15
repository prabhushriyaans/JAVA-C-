  #include<iostream>
using namespace std;
class stack
{
	int maxsize;
	int ptop;
	long *data;
	public:
	stack(int size)
	{
		maxsize=size;
		ptop=-1;
		data= new long[maxsize];
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

};
int main()
{
	int e,n,O,j;
	int Count=-1;
	stack S(100);
	 int r;
	 long nm;
	 cout<<"Enter a decimal number."<<endl;
	 cin>>nm;
	 while(nm>0)
     {
         r=nm%2;
         S.push(r);
         nm=nm/2;
     }
     cout<<"Binary number."<<endl;
     while(!S.isempty())
     {
         cout<<" "<<S.top();
         Count++;
		 S.pop();
     }
     cout<<endl<<Count<<": bits number."<<endl;
}

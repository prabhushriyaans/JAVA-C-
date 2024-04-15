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

};
int main()
{
	int e,n,O,j;
	stack S(60);
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
	while(!S.isempty())
	{
		cout<<" "<<S.top();
		S.pop();
	}

}

  #include<iostream>
//  #include<stack>
 #include<string.h>
 #include<bits/stdc++.h>
 using namespace std;
  class Stack
{
	int netsize;
	int tO;
	char *stor;
	public:
	Stack(int S)
	{
		netsize=S;
		tO=-1;
		stor= new char[netsize];
	}
    ~Stack()
	{
		delete[] stor;
	}
	bool empty()
	{
		return tO==-1;
	}
	bool full()
	{
		return tO==netsize-1;
	}
	void push(char e)
	{
		if(full())
		{
			cout<<"The stack is full."<<endl;
		}
		else
		{
			++tO;
			stor[tO]=e;
		}
	}
	void pop()
	{
		if(empty())
		{
			cout<<"The stack is empty."<<endl;
		}
		else
		--tO;
	}
	char top()
	{
	  if(empty())
		{
			cout<<"The stack is empty."<<endl;
			return -1;
		}
		else
	  return stor[tO];	
	}

};
 bool isOperator(char Op)
 {
     return (Op=='+' || Op=='-' || Op=='*' || Op=='/');
 }
  string postfix_infix(string S)
  {
      string Op1,Op2,infix;
      Stack s(20);
      for(char C : S)
      {
          if(isOperator(C))
          {
              Op1=s.top();
              s.pop();
              Op2=s.top();
              s.pop();
              infix="(" +Op2 +C +Op1 + ")";
              s.push(infix);
          }
          else
          {
              s.push(string(1,C));
          }
      }
      return s.top();
  }
 int main()
 {
     string postfix;
     cout<<"Enter the postfix string."<<endl;
     cin>>postfix;
     cout<<"The infix string is:"<<postfix_infix(postfix)<<endl;
 }

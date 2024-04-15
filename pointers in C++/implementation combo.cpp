#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Stack
{
	int netsize;
	int tO;
	char *stor;
	string *st;
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
	void spush(string e)
	{
		if(full())
		{
			cout<<"The stack is full."<<endl;
		}
		else
		{
			
			st=e;
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
	bool Operator(char C)
{
	return (C=='+' || C=='-' || C=='*' || C=='/');
}
    int precedence(char C)
    {
    	if(C=='+' || C=='-')
    	{
    		return 1;
		}
		if(C=='*' || C=='/')
		{
			return 2;
		}
			if(C=='$' || C=='^')
		{
			return 3;
		}
		return 0;
	}
string infix_postfix(string S)
{
	Stack s(20);
	int l;
	l=S.size();
	string S1;
	for(int i=0;i<l;i++)
	{
		if(isalnum(S[i]))
		{
			S1+=S[i];
		}
		else if(S[i]=='(')
		{
			s.push(S[i]);
		}
		else if(S[i]==')')
		{
			while(!s.empty() && s.top()!='(')
			{
				S1+= s.top();
				s.pop();
			}
			s.pop();
		}
		else if(Operator(S[i]))
		{
			while(!s.empty() && precedence(s.top())>=precedence(S[i]))
			{
				S1+= s.top();
				s.pop();
			}
			s.push(S[i]);
		}
	}
	while(!s.empty())
	{
		S1+= s.top();
		s.pop();	
	}
	return S1;
}
string infix_prefix(string infix)
{
	// Reverse String and replace ( with ) and vice versa
	// Get Postfix
	// Reverse Postfix
	int l = infix.size();

	// Reverse infix
	reverse(infix.begin(), infix.end());

	// Replace ( with ) and vice versa
	for (int i = 0; i < l; i++) {

		if (infix[i] == '(') {
			infix[i] = ')';
		}
		else if (infix[i] == ')') {
			infix[i] = '(';
		}
	}

	string prefix = infix_postfix(infix);

	// Reverse postfix
	reverse(prefix.begin(), prefix.end());

	return prefix;
}
 
 
int main()
{
	string S;
	int c;
	cout<<"What you want to do?."<<endl;
	cout<<"1.Convert infix to postfix?"<<endl;
	cout<<"2.Convert infix to prefix?"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
		cout<<"Enter an infix string."<<endl;
		cin>>S;
		cout<<infix_postfix(S);
		break;
		case 2:
		cout<<"Enter an infix string."<<endl;
		cin>>S;
		cout<<infix_prefix(S);
	}
}

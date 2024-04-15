 #include<iostream>
 #include<stack>
 #include<string.h>
 using namespace std;
 bool isOperator(char Op)
 {
     return (Op=='+' || Op=='-' || Op=='*' || Op=='/');
 }
  string postfix_infix(string S)
  {
      string Op1,Op2,infix;
      stack<string> s;
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

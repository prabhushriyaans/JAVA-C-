 #include<iostream>
 using namespace std;
 class node
 {
     public:
     int data;
     node* next;
     node(int e)
     {
         data=e;
         next=nullptr;
     }
 };
 class stack
 {
     node* top=nullptr;
     public:
     bool empty()
     {
         return top==nullptr;
        
     }
     void push(int e)
     {
         node* getnode=new node(e);
         getnode->data=e;
         getnode->next=top;
         top=getnode;
     }
     void pop()
     {
         if(empty())
         {
             cout<<"Empty stack."<<endl;
             return;
         }
         node* temp=top;
         top=top->next;
         delete temp;
     }
     int Top()
     {
          if(empty())
         {
             cout<<"Empty stack."<<endl;
             return -1;
         }
         return top->data;
     }
 };
 int main()
 {
     stack s;
     s.push(10);
      s.push(20);
       s.push(30);
        s.push(40);
         s.push(50);
         cout<<"stack elements."<<endl;
         while(!s.empty())
         {
             cout<<" "<<s.Top();
             s.pop();
         }
 }

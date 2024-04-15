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
 class Queue
 {
     node* rear=nullptr;
     node* front=nullptr;
     public:
     bool empty()
     {
         return front==nullptr;
     }
     void enqueue(int e)
     {
         node* getnode=new node(e);
         getnode->data=e;
         getnode->next=nullptr;
         if(empty())
         {
             front=getnode;
             rear=getnode;
         }
         else
         {
             rear->next=getnode;
             rear=getnode;
         }
     }
     void dequeue()
     {
         if(empty())
         {
             cout<<"The queue is empty."<<endl;
             return;
         }
         if(front==rear)
         {
             front=nullptr;
             rear=nullptr;
         }
         else
         {
             node* temp=front;
             front=front->next;
             delete temp;
         }
     }
     int display()
     {
          if(empty())
         {
             cout<<"The queue is empty."<<endl;
             return -1;
         }
         return front->data;
     }
 };
 int main()
 {
     Queue Q;
     Q.enqueue(10);
     Q.enqueue(20); 
      Q.enqueue(30);
      Q.enqueue(40);
     cout<<"Queue elements."<<endl;
     while(!Q.empty())
     {
         cout<<" "<<Q.display();
         Q.dequeue();
     }
 }

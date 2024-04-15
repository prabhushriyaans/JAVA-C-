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
 class cqueue
 {
     node* joint =nullptr;
     public:
     bool empty()
     {
         return joint==nullptr;
     }
     void enqueue(int e)
     {
         node* newnode=new node(e);
         newnode->data=e;
         if(empty())
         {
             newnode->next=newnode;
             joint=newnode;
         }
         else
         {
             newnode->next=joint->next;
             joint->next=newnode;
             joint=newnode;
             
         }
     }
     void dequeue()
     {
          if(empty())
         {
             cout<<"THe queue is empty."<<endl;
             return;
         }
         
         else if(joint->next==joint)
         {
             delete joint;
             joint=nullptr;
         }
         else
         {
             node* temp=joint->next;
             joint->next=temp->next;
             delete temp;
         }
     }
     int display()
     {
         if(empty())
         {
             cout<<"THe queue is empty."<<endl;
             return -1;
         }
         return joint->next->data;
     }
 };
 int main()
 {
     cqueue C;
     C.enqueue(10);
     C.enqueue(20);
     C.enqueue(30);
     C.enqueue(40);
     C.enqueue(50);
     C.enqueue(60);
     C.enqueue(70);
     C.enqueue(80);
     C.enqueue(90);
     C.enqueue(100);
     cout<<" CQueue elements"<<endl;
     while(!C.empty())
     {
         cout<<" "<<C.display();
         C.dequeue();
     }
 }

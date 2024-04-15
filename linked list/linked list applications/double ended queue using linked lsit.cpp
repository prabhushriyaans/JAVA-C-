   #include<iostream>
 using namespace std;
 class node
 {
     public:
     int data;
     node* next;
     node* prev;
     node(int e)
     {
         data=e;
         next=nullptr;
         prev=nullptr;
     }
 };
 class dequeue
 {
     node* front=nullptr;
     node* rear=nullptr;
     public:
     bool empty()
     {
         return front==nullptr;
     }
     void finsert(int e)
     {
         node* newnode=new node(e);
         newnode->data=e;
         if(empty())
         {
             newnode->next=nullptr;
             newnode->prev=nullptr;
             front=newnode;
             rear=newnode;
         }
         newnode->next=front;
         newnode->prev=nullptr;
         front->prev=newnode;
         front=newnode;
     }
     void rinsert(int e)
     {
         node* newnode=new node(e);
         newnode->data=e;
         if(empty())
         {
             newnode->next=nullptr;
             newnode->prev=nullptr;
             front=newnode;
             rear=newnode;
         }
         newnode->prev=rear;
         newnode->next=nullptr;
         rear->next=newnode;
         rear=newnode;
     }
     void fdelete()
     {
         if(empty())
         {
             cout<<"The queue is empty."<<endl;
             return;
         }
         if(front==rear)
         {
             delete front;
             front=nullptr;
             rear=nullptr;
         }
         else
         {
             node* temp=front;
             front=front->next;
             front->prev=nullptr;
             delete temp;
         }
     }
     void rdelete()
     {
         if(empty())
         {
             cout<<"The queue is empty."<<endl;
             return;
         }
         if(front==rear)
         {
             delete rear;
             front=nullptr;
             rear=nullptr;
         }
         else
         {
             node* temp=rear;
             rear=rear->prev;
             rear->next=nullptr;
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
     int ch1,e,ch2,n,n2;
     dequeue D;
     D.rinsert(40);
    D.rinsert(50);
    D.rinsert(60);
    D.rinsert(70);
    D.rinsert(80);
    cout<<"What is your choice."<<endl;
    cout<<"1.front insertion."<<endl;
    cout<<"2.rear insertion."<<endl;
    cout<<"3.No modifications."<<endl;
    cin>>ch1;
    switch(ch1)
    {
        case 1:
        cout<<"Enter the number of elments you want to insert."<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>e;
            D.finsert(e);
        }
        break;
         case 2:
        cout<<"Enter the number of elments you want to insert."<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>e;
            D.rinsert(e);
        }
        break;
        case 3:
        cout<<endl;
        break;
    }
     cout<<"What is your choice."<<endl;
     cout<<"1. delete front elements."<<endl;
     cout<<"2. delete rear elements."<<endl;
     cout<<"3.Display Queue only."<<endl;
     cin>>ch2;
     switch(ch2)
     {
         case 1:
         cout<<"Enter the number of elments you want to delete from font."<<endl;
        cin>>n2;
        for(int i=0;i<n2;i++)
        {
            D.fdelete();
        }
        while(!D.empty())
        {
            cout<<" "<<D.display();
             D.fdelete();
        }
        break;
        case 2:
         cout<<"Enter the number of elments you want to delete from rear."<<endl;
        cin>>n2;
        for(int i=0;i<n2;i++)
        {
            D.rdelete();
        }
        while(!D.empty())
        {
            cout<<" "<<D.display();
             D.fdelete();
        }
        break;
        case 3:
         while(!D.empty())
        {
            cout<<" "<<D.display();
             D.fdelete();
        }
        break;
     }
 }

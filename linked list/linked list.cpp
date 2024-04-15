   #include<iostream>
 using namespace std;
 class node
 {
     public:
     int data;
     node* next;
     node(int value)
     {
         data=value;
         next=nullptr;
     }
 };
 class LINKL
 {
     node* head=nullptr;
     public:
     void insert(int value)
     {
         node* getnode= new node(value);
         if(!head)
         {
             head=getnode;
         }
         else
         {
             node* current=head;
             while(current->next)
             {
                 current=current->next;
             }
             current->next=getnode;
         }
     }
     void cinsert(int e,int value)
     {
     	if(!head)
     	{
     		cout<<"empty list."<<endl;
     		return;
		 }
		 else
		 {
		 	node* p=head;
		 	while(p->next &&p->next->data!=value)
		 	{
		 	    p=p->next;
		 	}
		 	if(p->next)
		 	{
		 	    node* newnode=new node(value);
		 	    newnode->data=e;
		 	    newnode->next=p->next->next;
		 	    p->next->next=newnode;
		 	}
		 }
		 node* f=head;
		 if(f->data==value)
         {
             node* getnode=new node(value);
             getnode->data=e;
             getnode->next=f->next;
             f->next=getnode;
         }
	 }
     void ffreenode()
     {
         if(!head)
         {
             cout<<"Empty list."<<endl;
             return;
         }
         else if(head->data)
         {
             node* temp=head;
             head=head->next;
             delete temp;
         }
     }
     void rfreenode()
     {
     if(!head)
         {
             cout<<"Empty list."<<endl;
             return;
         }
         node* last=head;
         node* back=nullptr;
         while(last->next!=nullptr)
         {
         	back=last;
         	last=last->next;

		 }
	     if(back)
		 {
		 	 back->next=nullptr;
		 	   delete last;
			 }
			 else
			 {
			 	delete head;
			 	head=nullptr;
			 }
	 }
     void cfreenode(int value)
     {
         node* pO=head;
         while(pO->next && pO->next->data!=value)
         {
              pO=pO->next;
         }
          if(pO->next)
             {
                 node* temp=pO->next;
                 pO->next=pO->next->next;
                 delete temp;
             }
             else
             {
                 cout<<"The entered elemnt not present in the list."<<endl;
             }
     }
     void display()
     {
         node* p=head;
         while(p)
         {
             cout<<p->data<<" ";
             p=p->next;
         }
     }
     ~LINKL()
     {
         node* Q=head;
         while(Q)
         {
             node* temp=Q;
             Q=Q->next;
             delete temp;
         }
     }
 };
 int main()
 {
     LINKL l;
     int n,e,ch;
     l.insert(100);
     l.insert(200);
     l.insert(300);
     l.insert(400);
     l.insert(500);
     l.insert(600);
     l.insert(700);
     l.insert(800);
    //  l.ffreenode();
    //  l.display();
     cout<<"what's your choice."<<endl;
     cout<<"1.display all nodes intact."<<endl;
     cout<<"2.remove the starting node and display remaining nodes."<<endl;
      cout<<"3.remove the end node and display remaining nodes."<<endl;
     cout<<"4.remove the element of choice."<<endl;
     cout<<"5.enter node after specific node. "<<endl;
     cin>>n;
     switch(n)
     {
         case 1:
         l.display();
         break;
         case 2:
         l.ffreenode();
         l.display();
         break;
         case 3:
         l.rfreenode();
         l.display();
         break;
         case 4:
         cout<<"Enter the element to be deleted."<<endl;
         cin>>e;
         l.cfreenode(e);
         l.display();
         break;
         case 5:
         cout<<"Enter the node."<<endl;
         cin>>ch;
         cout<<"Enter the choice node"<<endl;
         cin>>e;
         l.cinsert(ch,e);
         l.display();
     }
 }

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
             head->next=head;
         }
         else
         {
             node* current=head;
             while(current->next!=head)
             {
                 current=current->next;
             }
             current->next=getnode;
             getnode->next=head;
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
             cout<<"Element deleted:"<<temp->data<<endl;
             delete temp;
         }
     }
     void cfreenode(int value)
     {
     	if(!head)
     	{
     		cout<<"empty list."<<endl;
     		return;
		 }
		 
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
         do
         {
         	 cout<<p->data<<" ";
             p=p->next;
		 }
         while(p!=head);
         {
            cout<<endl<<"circule linked list."<<endl;
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
     cout<<"3.remove the element of choice."<<endl;
     cout<<"4.enter node after specific node. "<<endl;
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
         cout<<"Enter the element to be deleted."<<endl;
         cin>>e;
         l.cfreenode(e);
         l.display();
         break;
         case 4:
         cout<<"Enter the node."<<endl;
         cin>>ch;
         cout<<"Enter the choice node"<<endl;
         cin>>e;
         l.cinsert(ch,e);
         l.display();
     }
 }

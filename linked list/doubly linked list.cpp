   #include<iostream>
 using namespace std;
 class node
 {
     public:
     int data;
     node* next;
     node* prev;
     node(int value)
     {
         data=value;
         next=nullptr;
         prev=nullptr;
     }
 };
 class LINKL
 {
     node* head=nullptr;
     node* tail=nullptr;
     public:
     void insert(int value)
     {
         node* getnode= new node(value);
         if(!head && !tail)
         {
             head=getnode;
             tail=getnode;
         }
         else
         {
             node* fp=head;
             node* fr=tail;
             tail->next=getnode;
             getnode->prev=tail;
             tail=getnode;

//             current->next=getnode;
         }
     }
     void cinsert(int e,int value)
     {
     	if(!head && !tail)
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
		 	     newnode->prev=p->next;
		 	    newnode->next=p->next->next;
		 	    if(p->next->next)
		 	    {
		 	    	p->next->next->prev=newnode;
				 }
		 	    p->next->next=newnode;
		 	}

		 }
		 node* p=head;
          if(p )
            {
                node* newnode=new node(value);
                newnode->data=e;
                 newnode->prev=head;
                newnode->next=head->next;
                head->next->prev=newnode;
            }
	 }

     void ffreenode()
     {
         if(!head && !tail)
         {
             cout<<"Empty list."<<endl;
             return;
         }
         else if(head->data && tail->data)
         {
             node* temp=head;
             head=head->next;
             head->prev=nullptr;
             delete temp;
         }
     }
     void cfreenode(int value)
     {
     	 if(!head && !tail)
         {
             cout<<"Empty list."<<endl;
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
                 pO->next->prev=pO;
                 delete temp;
             }
             else
             {
                 cout<<"The entered elemnt not present in the list."<<endl;
             }
     }
     void fdisplay()
     {
         node* p=head;
         while(p)
         {
             cout<<p->data<<" ";
             p=p->next;
         }
     }
     void bdisplay()
     {
     	node* p=tail;
         while(p)
         {
             cout<<p->data<<" ";
             p=p->prev;
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
     int i=1;
    // while(i<=1000)
     //{
      //   l.insert(i);
        // i++;
     //}
    //  l.ffreenode();
    //  l.display();
     l.insert(100);
     l.insert(200);
     l.insert(300);
     l.insert(400);
     l.insert(500);
     l.insert(600);
     l.insert(700);
     l.insert(800);
     cout<<"what's your choice."<<endl;
     cout<<"1.display all nodes intact."<<endl;
     cout<<"2.remove the starting node and display remaining nodes."<<endl;
     cout<<"3.remove the element of choice."<<endl;
     cout<<"4.enter node after specific node. "<<endl;
     cout<<"5.reverse display"<<endl;
     cin>>n;
     switch(n)
     {
         case 1:
         l.fdisplay();
         break;
         case 2:
         l.ffreenode();
         cout<<"queue:"<<endl;
         l.fdisplay();
         cout<<endl;
          cout<<"stack:"<<endl;
         l.bdisplay();
         break;
         case 3:
         cout<<"Enter the element to be deleted."<<endl;
         cin>>e;
         l.cfreenode(e);
         cout<<"queue:"<<endl;
         l.fdisplay();
         cout<<endl;
          cout<<"stack:"<<endl;
         l.bdisplay();
         break;
         case 4:
         cout<<"Enter the node."<<endl;
         cin>>ch;
         cout<<"Enter the choice node"<<endl;
         cin>>e;
         l.cinsert(ch,e);
         //l.fdisplay();
          cout<<"queue:"<<endl;
         l.fdisplay();
         cout<<endl;
          cout<<"stack:"<<endl;
         l.bdisplay();
         break;
         case 5:
        l.bdisplay();
     }
 }

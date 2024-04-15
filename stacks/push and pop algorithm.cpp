#include<iostream>
 using namespace std;
 class stack
 {
     int Array[10];
     int sizee,acsize;
     public:
     int getstack();
     int pushorpop();
     //int pop();
     int finaldisplay();
 };
 int stack::getstack()
 {
     acsize=10;
     cout<<"Enter the size of the Array"<<endl;
     cin>>sizee;
     cout<<"Enter the Elements of the Array:"<<endl;
     for(int i=0;i<sizee;i++)
     {
         cin>>Array[i];
     }
 }
 int stack::pushorpop()
 {
     int ele,o,O,rg;
     cout<<"What you want to perform?"<<endl;
     cout<<"1.push"<<endl;
     cout<<"2.pop"<<endl;
     cin>>o;
     switch(o)
     {
         case 1:
     if(sizee<acsize)
         {
             cout<<"Enter The extra elements:"<<endl;
            for(int i=sizee;sizee<acsize;sizee++)
            {
                 cin>>ele;
                 Array[sizee]=ele;
            }
         }
         else
         {
             cout<<"The Array is full and futher elements can be added:"<<endl;
         }
         break;
         case 2:
          if(sizee>-1)
         {
             cout<<"Enter how many elements you want to delete."<<endl;
             cin>>O;
             rg=sizee-O;
           while(sizee>rg)
           {
//           	   Array[sizee]=Array[sizee+1];
                sizee--;
           }

         }
         else
            {
            cout<<"The Array is empty no elements can be poped;"<<endl;
         }
         break;
     }
 }
 int stack::finaldisplay()
 {
     cout<<"The elements of modified array:"<<endl;
     for(int i=0;i<sizee;i++)
     {
         cout<<" "<<Array[i];
     }
 }
 int main()
 {
     stack s;
     s.getstack();
     s.pushorpop();
     s.finaldisplay();
}

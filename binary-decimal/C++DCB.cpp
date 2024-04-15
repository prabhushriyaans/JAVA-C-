 #include<iostream>
 #include<math.h>
 using namespace std;
 int main()
 {
     long D_No=0,r,a=0;
     long B_No;
     cout<<"Enter the Binary number."<<endl;
     cout<<endl;
     cin>>B_No;
     while(B_No>0)
     {
         r=B_No%10;
         D_No=D_No+(r*pow(2,a));
         a++;
         B_No=B_No/10;
     }
     cout<<"The Decimal Number is:"<<D_No<<endl;
 }

#include<iostream>
using namespace std;
int main()
{
	int Array[]={12,34,56,78,90,10000};
	int ele,PO,size;
	size=sizeof(Array)/sizeof(Array[0]);
	cout<<"All the elements of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<Array[i];
	}
	cout<<endl<<"Enter the element you want to insert into the array."<<endl;
	cin>>ele;
	cout<<"Also enter the pisition where you want to enter the element."<<endl;
	cin>>PO;
	size=size+1;
	for(int i=size-1;i>PO-1;i--)
	{
		Array[i+1]=Array[i];
	}
	Array[PO-1]=ele;
	cout<<"Array after the insertion:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<Array[i];
	}
	return 0;
}

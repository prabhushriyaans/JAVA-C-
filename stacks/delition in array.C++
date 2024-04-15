#include<iostream>
using namespace std;
int main()
{
	int Array[]={12,34,56,78,90,10000};
	int PO,size;
	size=sizeof(Array)/sizeof(Array[0]);
	cout<<"All the elements of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<Array[i];
	}
	cout<<endl<<"Enter the position where you want to enter the element."<<endl;
	cin>>PO;
	for(int i= PO-1;i<size-1;i++)
	{
		Array[i]=Array[i+1];
	}
	size--;
	cout<<"Array after the delition:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<Array[i];
	}
	return 0;
}

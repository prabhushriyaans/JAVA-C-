#include<iostream>
using namespace std;
int main()
{
	int Array[]={12,56,7,8,9000,344,5555};
	int ele,tmp;
	cout<<"Enter the element you want to find in the array."<<endl;
	cin>>ele;
	for(int i=0;i<sizeof(Array)/sizeof(Array[0]);i++)
	{
		if(Array[i]==ele)
		{
			tmp=Array[i];
		}
	}
	if(tmp==ele)
	{
		cout<<"The element you desired is present in the array:"<<tmp<<endl;
		cout<<"Array:"<<endl;
			for(int i=0;i<sizeof(Array)/sizeof(Array[0]);i++)
	{
		 cout<<" "<<Array[i];
	}
	}
	else
	{
		cout<<"The element you typed is not present in the array."<<endl;
			cout<<"Array:"<<endl;
			for(int i=0;i<sizeof(Array)/sizeof(Array[0]);i++)
	{
		 cout<<" "<<Array[i];
	}
	}
}

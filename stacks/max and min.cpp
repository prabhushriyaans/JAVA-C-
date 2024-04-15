#include<iostream>
using namespace std;
int main()
{
	int Array[]={12,34,56,78,900,7888,92221,2000202};
	int max,min;
	cout<<endl<<"The array:"<<endl;
	for(int i=0;i<sizeof(Array)/sizeof(Array[0]);i++)
	{
		cout<<" "<<Array[i];
	}
	max=min=Array[0];
	for(int i=0;i<sizeof(Array)/sizeof(Array[0]);i++)
	{
		if(Array[i]>max)
		{
			max=Array[i];
		}
		else if(Array[i]<min)
		{
			min=Array[i];
		}
	}
	cout<<endl<<"The maximum element in the array is:"<<max<<endl;
	cout<<"The minimum element in the array is:"<<min<<endl;
}

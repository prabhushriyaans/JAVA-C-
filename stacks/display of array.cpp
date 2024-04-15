#include<iostream>
using namespace std;
int main()
{
	int Array[]={12,34,56,78,900,7888,92381,2202};
	int max,min;
	cout<<endl<<"The array:"<<endl;
	for(int i=0;i<sizeof(Array)/sizeof(Array[0]);i++)
	{
		cout<<" "<<Array[i];
	}
}

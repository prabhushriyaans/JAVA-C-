#include<iostream>
using namespace std;
void Bsort(int array[],int n)
{
    int Count=0;
	int I,J,temp;
	for(I=0;I<n-1;I++)
	{
	    Count++;
		for(J=0;J<n-I-1;J++)
		{
		     Count++;
			if(array[J]>array[J+1])
			{
			     Count++;
				temp=array[J];
				 Count++;
				array[J]=array[J+1];
				 Count++;
				array[J+1]=temp;
				 Count++;
			}
			 Count++;
		}
		 Count++;
	}
	 Count++;
	  cout<<"Time complexity of the sort:"<<Count<<endl;
}
 int main()
 {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[]={10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Best case:"<<endl;
    Bsort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
     cout<<"Worst case:"<<endl;
    Bsort(arr1, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}

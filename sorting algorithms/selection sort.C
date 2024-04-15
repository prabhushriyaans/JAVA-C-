  #include<stdio.h>
#include<string.h>
void selectionsort(int arr[],int n)
{
	int i,j,mid_index,temp;
	for(i=0;i<n-1;i++)
	{
		mid_index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[mid_index])
			{
				mid_index=j;
			}
		}
		temp=arr[mid_index];
		arr[mid_index]=arr[i];
		arr[i]=temp;
	}
}
int main()
{
  int array[] = {12, 11, 13, 5, 6,7,9,10,23,48,65};
    int n = sizeof(array) / sizeof(array[0]);
	selectionsort(array,n);
	printf("The assanding order of the entere number is:");
	for(int i=0;i<n;i++)
	{
	   printf("%d ",array[i]);
	}
}

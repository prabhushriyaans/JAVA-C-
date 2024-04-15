    #include<iostream>
 using namespace std;
 int Count=0;
 void merge(int arr[],int mid,int low,int high)
 {
     int i,j,k;
     int B[high-low+1];
     i=low;
     j=mid+1;
     k=0;
     while(i<=mid && j<=high)

     {
         Count++;
         if(arr[i]<arr[j])
         {
               Count++;
             B[k]=arr[i];
       Count++;
             i++;
               Count++;
             k++;
               Count++;
         }
           Count++;
         if(arr[i]>arr[j])
         {
               Count++;
               B[k]=arr[j];
                 Count++;
             j++;
               Count++;
             k++;
               Count++;
         }
         Count++;
     }
       while(i<=mid)
         {
               Count++;
             B[k]=arr[i];
               Count++;
             i++;
               Count++;
             k++;
               Count++;
         }
           Count++;
         while(j<=high)
         {
               Count++;
              B[k]=arr[j];
                Count++;
             j++;
               Count++;
             k++;
               Count++;
         }
           Count++;
          for (i = low, k = 0; i <= high; i++)
          {
                Count++;
        arr[i] = B[k];
          Count++;
        k++;
          Count++;
 }
   Count++;
 }
 void mergesort(int arr[],int low,int high){
     if(low<high)
     {
           Count++;
         int mid=(low+high)/2;
           Count++;
         mergesort(arr ,low,mid);
           Count++;
         mergesort(arr ,mid+1,high);
           Count++;
         merge(arr ,mid,low,high);
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
    mergesort(arr,0,n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
     cout<<"Worst case:"<<endl;
    mergesort(arr1,0,n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}


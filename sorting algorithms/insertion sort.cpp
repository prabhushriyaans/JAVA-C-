#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
     int j=0;
     int count=0;
    for (int i = 1; i < n; i++)
        {
        count++;
        int key = arr[i];
        count++;
        for( j=i-1;j >= 0 && arr[j] >key;j--)
        {
            count++;

            	arr[j + 1] = arr[j];
            	count++;
        }
        count++;
        arr[j + 1] = key;
        count++;
    }
    count++;
     cout<<"Time complexity of the sort:"<<count<<endl;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[]={10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Best case:"<<endl;
    insertionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
     cout<<"Worst case:"<<endl;
    insertionSort(arr1, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}

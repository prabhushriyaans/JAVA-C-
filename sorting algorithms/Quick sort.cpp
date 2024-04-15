  #include <iostream>
using namespace std;
int Count=0;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
   Count++;
    int i = low + 1;
    Count++;
    int j = high;
 Count++;
    do {
         Count++;
        while (arr[i] <= pivot && i <= high) {
             Count++;
            i++;
             Count++;
        }
         Count++;
        while (arr[j] > pivot) {
             Count++;
            j--;
             Count++;
        }
         Count++;
        if (i < j) {
             Count++;
            swap(arr[i], arr[j]);
             Count++;
        }
         Count++;
    } while (i < j);
      Count++;
    swap(arr[low], arr[j]);
     Count++;
    return j;
     Count++;
}

void QSort(int arr[], int low, int high) {
    if (low < high) {
         Count++;
        int pivotIndex = partition(arr, low, high);
         Count++;
        QSort(arr, low, pivotIndex - 1);
         Count++;
        QSort(arr, pivotIndex + 1, high);
         Count++;
          cout<<"Time complexity of the sort:"<<Count<<endl;
    }
     Count++;
     cout<<"Time complexity of the sort:"<<Count<<endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Best case:" << endl;

    QSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Worst case:" << endl;

    QSort(arr1, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}

 #include <iostream>

int main() {
    int nums[] = {10, 20, 30, 40, 50}; // Declare an integer array
    
    int *ptr = nums; // Assign the address of the first element of the array to the pointer
    
    using namespace std; // Using the std namespace
    
    for (int i = 0; i < 5; ++i) {
        cout << "Element at index " << i << ": " << *(ptr + i) << endl;
    }
    
    return 0;
}


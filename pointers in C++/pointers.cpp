#include <iostream>

int main() {
    int num = 42; // Declare an integer variable
    int *ptr;     // Declare a pointer to an integer
    
    ptr = &num;   // Assign the address of 'num' to the pointer
    
    using namespace std; // Using the std namespace
    
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;   // This will print the memory address of 'num'
    cout << "Value pointed by ptr: " << *ptr << endl; // This will print the value stored in 'num' using the pointer
    
    return 0;
}


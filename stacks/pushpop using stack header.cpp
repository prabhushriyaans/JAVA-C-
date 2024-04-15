 #include <iostream>
#include <stack>

using namespace std;

int main() {
    int n,e;
    stack<int> myStack;

//    // Pushing elements onto the stack
//    myStack.push(10);
//    myStack.push(20);
//    myStack.push(30);
//    myStack.push(100);
//    cout << "Stack after pushing elements: ";
//    while (!myStack.empty()) {
//        cout << myStack.top() << " ";
//        myStack.pop();
//    }
//    cout << endl;
//
//    // Pushing more elements onto the stack
    cout<<"Enter how many elements you want to add to the stack."<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        myStack.push(e);
    }
    
    cout << "Stack after pushing more elements: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}


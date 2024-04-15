#include <iostream>
using namespace std;
class Node {
public:
    int data[3];  // Array to hold data
    Node* next;

    Node(int value1, int value2, int value3)  
	 {
	 	next=nullptr;
        data[0] = value1;
        data[1] = value2;
        data[2] = value3;
    }
};
int main() {
    Node* node1 = new Node(10, 20, 30);
    Node* node2 = new Node(40, 50, 60);

    cout << "Node 1 data: " << node1->data[0] << " " << node1->data[1] << " " << node1->data[2] << endl;
    cout << "Node 2 data: " << node2->data[0] << " " << node2->data[1] << " " << node2->data[2] << endl;

    delete node1;
    delete node2;

    return 0;
}


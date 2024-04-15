    #include <iostream>
#include <stack>

using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) 
    {
        data=value;
        left=nullptr;
        right=nullptr;
    }
};

class BinaryTree {
public:
    TreeNode* root=nullptr;

    // Function to insert a node into the binary tree iteratively
    void insert(int value) {
        TreeNode* newNode = new TreeNode(value);
        if (root == nullptr) {
            root = newNode;
            return;
        }

        TreeNode* current = root;
        while (true) {
            if (value < current->data) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    return;
                }
                current = current->left;
            } else if (value > current->data) {
                if (current->right == nullptr) {
                    current->right = newNode;
                    return;
                }
                current = current->right;
            } else {
                // Handle duplicates if needed
                return;
            }
        }
    }

    // Function to perform an in-order traversal iteratively and print the elements
    void inOrderTraversal() {
        stack<TreeNode*> nodeStack;
        TreeNode* current = root;

        while (current != nullptr || !nodeStack.empty()) {
            while (current != nullptr) {
                nodeStack.push(current);
                current = current->left;
            }
            current = nodeStack.top();
            nodeStack.pop();
            cout << current->data << " ";
            current = current->right;
        }
        cout << endl;
    }

    // Function to perform a pre-order traversal iteratively and print the elements
    void preOrderTraversal() {
        if (root == nullptr)
            return;

        stack<TreeNode*> nodeStack;
        nodeStack.push(root);

        while (!nodeStack.empty()) {
            TreeNode* current = nodeStack.top();
            nodeStack.pop();
            cout << current->data << " ";

            if (current->right)
                nodeStack.push(current->right);
            if (current->left)
                nodeStack.push(current->left);
        }

        cout << endl;
    }

    // Function to perform a post-order traversal iteratively and print the elements
    void postOrderTraversal() {
        if (root == nullptr)
            return;

        stack<TreeNode*> s1, s2;
        s1.push(root);

        while (!s1.empty()) {
            TreeNode* current = s1.top();
            s1.pop();
            s2.push(current);

            if (current->left)
                s1.push(current->left);
            if (current->right)
                s1.push(current->right);
        }

        while (!s2.empty()) {
            TreeNode* current = s2.top();
            s2.pop();
            cout << current->data << " ";
        }
        cout << endl;
    }
};

int main() {
    BinaryTree tree;

    // Insert elements into the binary tree
    tree.insert(4);
    tree.insert(1);
    tree.insert(2);
    tree.insert(6);
   tree.insert(5);

    // Perform in-order traversal to display the elements
    cout << "In-order traversal: ";
    tree.inOrderTraversal();

    // Perform pre-order traversal to display the elements
    cout << "Pre-order traversal: ";
    tree.preOrderTraversal();

    // Perform post-order traversal to display the elements
    cout << "Post-order traversal: ";
    tree.postOrderTraversal();

    return 0;
}


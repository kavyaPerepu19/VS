#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    
    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

Node* minValueNode(Node* node) {
    Node* current = node;
    
    // Loop down to find the leftmost leaf
    while (current && current->left != nullptr) {
        current = current->left;
    }
    
    return current;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }
    
    // If the key to be deleted is smaller than the root's key, then it lies in the left subtree
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    }
    // If the key to be deleted is greater than the root's key, then it lies in the right subtree
    else if (key > root->key) {
        root->right = deleteNode(root->right, key);
    }
    // If key is same as root's key, then this is the node to be deleted
    else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = minValueNode(root->right);
        
        // Copy the inorder successor's content to this node
        root->key = temp->key;
        
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

// Function to print inorder traversal of a binary tree
void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->key << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    // Sample binary search tree
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);
    
    cout << "Inorder traversal before deletion: ";
    inorderTraversal(root);
    cout << endl;
    
    int keyToDelete = 30;
    root = deleteNode(root, keyToDelete);
    
    cout << "Inorder traversal after deletion of " << keyToDelete << ": ";
    inorderTraversal(root);
    cout << endl;
    
    return 0;
}

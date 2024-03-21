#include <iostream>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

    TreeNode* insert(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->value) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }

        return node;
    }

    void postOrderTraversal(TreeNode* node) {
        if (node != nullptr) {
            postOrderTraversal(node->left);
            postOrderTraversal(node->right);
            cout << node->value << " ";
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        root = insert(root, value);
    }

    void postOrderTraversal() {
        postOrderTraversal(root);
        cout << endl;
    }
};

int main() {
    BinaryTree binaryTree;
    int values[] = {5, 3, 7, 2, 4, 6, 8};
    int size = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < size; ++i) {
        binaryTree.insert(values[i]);
    }

    cout << "Post-order traversal: ";
    binaryTree.postOrderTraversal();

    return 0;
}

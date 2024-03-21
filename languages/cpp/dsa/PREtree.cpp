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

    void preOrderTraversal(TreeNode* node) {
        if (node != nullptr) {
            cout << node->value << " ";
            preOrderTraversal(node->left);
            preOrderTraversal(node->right);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        root = insert(root, value);
    }

    void preOrderTraversal() {
        preOrderTraversal(root);
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

    cout << "Pre-order traversal: ";
    binaryTree.preOrderTraversal();

    return 0;
}

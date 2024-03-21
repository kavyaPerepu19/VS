#include <iostream>
#include <queue>
#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Tree{
public:
    TreeNode* createTree(vector<int>& levelOrder, int index) {
       
 if(index >= levelOrder.size() || levelOrder[index]==-1)
            return nullptr;
        TreeNode* root=new TreeNode(levelOrder[index]);
        root->left=createTree(levelOrder,2*index+1);
        root->right= createTree(levelOrder,2*index+2);
        return root;
    }
    TreeNode* createTree(vector<int>& levelOrder) {
        return createTree(levelOrder, 0);
    }
};


void inorderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    vector<int> levelOrder = {1, 2, 2, 3, 4, 4, 3};
    Tree tree;
    TreeNode* root = tree.createTree(levelOrder);

    cout << "Inorder Traversal of the created tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}

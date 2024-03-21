#include <iostream>
using namespace std;
class BinaryTree
{

public:
    int a[8];
    int top;
    BinaryTree(int root)
    {
        a[0] = root;
        top = 0;
    }
    void setLeft(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 1] = element;
        top += 1;
    }
    void setRight(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 2] = element;
        top += 1;
    }
    int size()
    {
        return top;
    }
    int ParentIndex(int index)
    {
        return ((index - 1) / 2);
    }
    int LeftChild(int index)
    {
        return ((index * 2) + 1);
    }
    int RightChild(int index)
    {
        return ((index * 2) + 2);
    }
    void printTree()
    {
        for (int i = 0; i < 7; i++)
        {
            cout << a[i] << "->" << i << endl;
        }
    }
    void printTree1()
    {
        for (int i = 0; i < 8; i++)
        {
            cout << a[i] << "->" << i << endl;
        }
    }
    void insert(int ele)
    {
        int index = top + 1;
        a[index] = ele;
        // int parent=ParentIndex(top+1);
        while (index > 0)
        {
            int parent = ParentIndex(index);
            if (a[parent] < a[index])
            {
                int temp;
                temp = a[parent];
                a[parent] = a[index];
                a[index] = temp;
                index = parent;
            }
            else
            {
                break;
            }
        }
    }
    void deleteNode()
    {
        int index = 0;
        while (index < 8)
        {
            int r = RightChild(index);
            int l = LeftChild(index);
            if (a[r] > a[l])
            {
                a[index] = a[r];
                index = r;
            }
            else if (a[l] > a[r])
            {
                a[index] = a[l];
                index = l;
            }
        }
    }
};

int main()
{
    BinaryTree *b = new BinaryTree(100);
    b->setLeft(0, 11);
    b->setRight(0, 92);
    b->setLeft(1, 3);
    b->setRight(1, 10);
    b->setLeft(2, 61);
    b->setRight(2, 42);
    cout << "Initial Tree" << endl;
    b->printTree();
    // cout << b->size() << endl;
    // cout << b->ParentIndex(5);
    cout << "Inserting 100 into the tree" << endl;
    b->insert(40);
    b->printTree1();
    b->deleteNode();
    cout << "Deleting the root node" << endl;
    b->printTree1();
    return 0;
}

// a[top+1]=element
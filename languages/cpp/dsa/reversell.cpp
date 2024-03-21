#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* link;
    node(int val) {
        data = val;
        link = nullptr;
    }
};

class list {
public:
    node* head;
    node* tail; // Keep track of the last node
    int count;

    list(int da) {
        head = new node(da);
        tail = head; // Initialize tail to the first node
        count = 1;
        cout << "First block added" << endl;
    }

    void add(int da) {
        node* block = new node(da);
        tail->link = block; // Add the new node to the end
        tail = block; // Update tail to the new last node
        count++;
        cout << "New block added with data " << block->data << endl;
    }

    void display() {
        cout << "Displaying list" << endl;
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data;
            if (temp->link != NULL) {
                cout << " -> ";
            }
            temp = temp->link;
        }
        cout << "\nNode count is " << count << endl;
    }

    void reverseRecursive(node* curr, node* prev) {
        if (curr == nullptr) {
            head = prev;
            cout << "Linked list has been reversed recursively" << endl;
            return;
        }

        node* next = curr->link;
        curr->link = prev;

        reverseRecursive(next, curr);
    }

    void reverse() {
        reverseRecursive(head, nullptr);
    }
};

int main() {
    list l1(1);
    l1.add(2);
    l1.add(3);
    l1.add(4);
    l1.display();

    l1.reverse();
    l1.display();

    l1.reverse();
    l1.display();

    l1.add(8);
    l1.display();

    return 0;
}

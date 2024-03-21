#include<iostream>
using namespace std;

class binTree {
private:
    int array[20];
    int top;

    void maxHeapify(int i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left < top && array[left] > array[largest]) {
            largest = left;
        }

        if (right < top && array[right] > array[largest]) {
            largest = right;
        }

        if (largest != i) {
        
            swap(array[i], array[largest]);

            
            maxHeapify(largest);
        }
    }

public:
    binTree(int data) {
        array[0] = data;
        top = 1;
    }

    void setLeft(int i, int data) {
        array[(2 * i) + 1] = data;
        top++;
        maxHeapify(i);
    }
    void setRight(int i, int data) {
        array[(2 * i) + 2] = data;
        top++;
        maxHeapify(i);
    }

    void print() {
        for (int i = 0; i < top; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    binTree b(2);
    b.setLeft(0, 3);
    b.print();
    b.setRight(0, 4);
    b.print();

    return 0;
}

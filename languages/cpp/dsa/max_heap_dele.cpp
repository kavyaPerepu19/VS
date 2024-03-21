#include <iostream>
using namespace std;
class PriorityQueue {
public:
    int* arr;
    int capacity;
    int size;


    PriorityQueue(int initialCapacity = 10) : capacity(initialCapacity), size(0) {
        arr = new int[capacity];
    }

    void insert(int value) {
        if (size == capacity) {
            int* newArray = new int[2 * capacity];
            for (int i = 0; i < size; ++i) {
                newArray[i] = arr[i];
            }
            delete[] arr;
            arr = newArray;
            capacity *= 2;
        }

        arr[size++] = value;
        heapifyUp(size - 1);
    }

    void removeHighestPriority() {
        if (size > 0) {
           
            std::swap(arr[0], arr[size - 1]);
            --size;
            heapifyDown(0);
        } else {
            cout << "Priority queue is empty. Cannot remove." << std::endl;
        }
    }
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout <<endl;
    }

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (arr[index] > arr[parent]) {
                std::swap(arr[index], arr[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        while (true) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int largest = index;

            if (leftChild < size && arr[leftChild] > arr[largest]) {
                largest = leftChild;
            }

            if (rightChild < size && arr[rightChild] > arr[largest]) {
                largest = rightChild;
            }

            if (largest != index) {
                std::swap(arr[index], arr[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }
};

int main() {
    PriorityQueue priorityQueue;
    priorityQueue.insert(3);
    priorityQueue.insert(5);
    priorityQueue.insert(1);
    priorityQueue.insert(2);
    cout << "Priority queue elements: ";
    priorityQueue.display();
    priorityQueue.removeHighestPriority();
    cout << "Priority queue elements after removal: ";
    priorityQueue.display();
    priorityQueue.insert(6);
    priorityQueue.display();


    return 0;
}

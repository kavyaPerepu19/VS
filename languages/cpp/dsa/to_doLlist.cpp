#include <iostream>
#include <string>

using namespace std;

class Task {
public:
    string desc;
    int num;

    Task() : num(0), desc("") {}

    Task(int pri, string abt) : num(pri), desc(abt) {}
};

class PriorityQueue {
public:
    Task* arr;
    int capacity;
    int size;

    PriorityQueue(int initialCapacity = 10) : capacity(initialCapacity), size(0) {
        arr = new Task[capacity];
    }

    ~PriorityQueue() {
        delete[] arr;
    }

    void insert(Task value) {
        arr[size++] = value;
        heapifyUp(size - 1);
        heapifyDown(size-1)
    }

    void removeHighestPriority() {
        if (size > 0) {
            std::swap(arr[0], arr[size - 1]);
            --size;
            heapifyDown(0);
        } else {
            cout << "Priority queue is empty. Cannot remove." << endl;
        }
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i].num << " ->" << arr[i].desc << endl;
        }
        cout << endl;
    }

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (arr[index].num < arr[parent].num) {
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
            int smallest = index;

            if (leftChild < size && arr[leftChild].num < arr[smallest].num) {
                smallest = leftChild;
            }

            if (rightChild < size && arr[rightChild].num < arr[smallest].num) {
                smallest = rightChild;
            }

            if (smallest != index) {
                std::swap(arr[index], arr[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }
};

int main() {
    PriorityQueue priorityQueue;
    priorityQueue.insert(Task(4, "call"));
    priorityQueue.insert(Task(5, " go to college"));
    priorityQueue.insert(Task(1, " sleep"));
    priorityQueue.insert(Task(2, " anime"));

    cout << "Priority queue elements:" << endl;
    priorityQueue.display();

    priorityQueue.removeHighestPriority();

    cout << "Priority queue elements after removal:" << endl;
    priorityQueue.display();

    priorityQueue.insert(Task(6, " code"));

    cout << "Priority queue elements after insertion:" << endl;
    priorityQueue.display();

    return 0;
}

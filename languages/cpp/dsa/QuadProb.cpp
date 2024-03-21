#include <iostream>
using namespace std;

class node {
public:
    int key;
    int value;
    node(int key, int value) {
        this->key = key;
        this->value = value;
    }
};

class Map {
public:
    node **htable;
    int capacity;
    
    Map(int capacity = 5) {
        this->capacity = capacity;
        htable = new node*[capacity]();
    }
    
    int hash(int key) {
        return key % capacity;
    }
    
    int probe(int index, int attempt) {
        return (index + attempt * attempt) % capacity; // Quadratic probing
    }
    
    void insert(int key, int value) {
        int index = hash(key);
        int attempt = 0;
        
        while (htable[index] && htable[index]->key != key && attempt < capacity) {
            index = probe(index, ++attempt);
        }
        
        if (!htable[index] || htable[index]->key != key) {
            htable[index] = new node(key, value);
        }
        else {
            cout << "Key already exists, updating value." << endl;
            htable[index]->value = value;
        }
    }
    
    void display() {
        for (int i = 0; i < capacity; ++i) {
            cout << "Bucket " << i << ": ";
            if (htable[i]) {
                cout << "(" << htable[i]->key << ", " << htable[i]->value << ")";
            }
            else {
                cout << "Empty";
            }
            cout << endl;
        }
    }
    
    int search(int key) {
        int index = hash(key);
        int attempt = 0;
        
        while (htable[index] && htable[index]->key != key && attempt < capacity) {
            index = probe(index, ++attempt);
        }
        
        return (htable[index] && htable[index]->key == key) ? htable[index]->value : -1;
    }
    
    void remove(int key) {
        int index = hash(key);
        int attempt = 0;
        
        while (htable[index] && htable[index]->key != key && attempt < capacity) {
            index = probe(index, ++attempt);
        }
        
        if (htable[index] && htable[index]->key == key) {
            delete htable[index];
            htable[index] = nullptr;
        }
        else {
            cout << "Key not found." << endl;
        }
    }
};

int main() {
    Map hmap;
    hmap.insert(2, 3);
    hmap.insert(1, 2);
    hmap.insert(6, 4);
    hmap.insert(11, 5);
    hmap.insert(16, 6);
    hmap.insert(21, 7);
    hmap.remove(2);
    cout << hmap.search(1) << endl;
    hmap.display();

    return 0;
}

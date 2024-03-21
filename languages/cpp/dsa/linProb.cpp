#include <iostream>
using namespace std;
class node{
    public:
    int key;
    int value;
    node(int key, int value){
        this->key=key;
        this->value=value;
    }
};
class Map{
    public:
    node ** htable;
    Map()
    {
        htable=new node*[5]();
    }
    int hash(int key)
    {
        return key%5;
    }
    void insert(int key,int value)
    {
        int index=hash(key);
        while(htable[key] && htable[index]->key!=key)
        {
            index=(index+1)%5;
        }
        htable[index]=new node(key,value);
    }
      void display() {
        for (int i = 0; i < 5; ++i) {
            cout << "Bucket " << i << ": ";
            if (htable[i]) {
                cout << "(" << htable[i]->key << ", " << htable[i]->value << ")";
            } else {
                cout << "Empty";
            }
            cout << endl;
        }
    }
     int search(int key) {
        int index = hash(key);
        while (htable[index] && htable[index]->key != key) {
            index = (index + 1) % 5;
        }
        return htable[index] ? htable[index]->value : -1;
    }
    void remov(int key)
    {
        int index=hash(key);
        while(htable[key] && htable[index]->key!=key)
        {
            index=(index+1)%5;
        }
         htable[index] = nullptr;
    }
};
int main()
{
    Map hmap;
    hmap.insert(2,3);
    
    hmap.insert(1,2);
    hmap.remov(2);
    cout<<hmap.search(1)<<endl;
    hmap.display();
    
}
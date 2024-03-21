#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int> s1,s2;
    void enqueue(int data){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();


        }
        s1.push(data);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void dequeue(){
        cout<<s1.top()<<endl;
        s1.pop();
    }

};
int main(){
    Queue q;
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}
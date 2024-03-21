#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int> s1,s2;
    void enqueue(int data){
        s1.push(data);
    }
    int dequeue(){
        if(s1.empty() && s2.empty()){
            return -1;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int data = s2.top();
        s2.pop();
        return data;
    }


};
int main(){
    Queue q;
    q.enqueue(12);
    q.enqueue(33);
    q.enqueue(2);
    q.enqueue(122);
    cout<<q.dequeue()<<endl;;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue();


    return 0;
}
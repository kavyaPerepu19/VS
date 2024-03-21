#include<iostream>
using namespace std;
class Node{
    public:
    Node* link;
    string task;

    Node(string task)
    {
        this->task=task;
        this->link=NULL;
    }
};
class Queue{
    private:
    Node* front;
    Node * rear;
    int count=0;
    int cap=10;
    bool isEmpty()
    {
        if(count==0)
        {
            return true;
        }
        else{
            
            return false;
        }
    }
    public:
    Queue (){
        front=rear=NULL;
    }
    Queue(string task)
    {
        front= new Node(task);
        rear=front;
        cout<<"Queue is created"<<endl;
        count++;
    }
    
    void enqueue(string task)
    {   if(count==cap){
        cout<<"Cannot insert at max ";

    }
       else{
         Node * block= new Node(task);
        rear->link=block;
        rear=rear->link;
        cout<<"enque operation performed with data "<<task<<endl;
        count++;
       }

    }
    void dequeue()
    {   
        
        Node* temp=front;
        while(temp->link!=rear)
        {
            temp=temp->link;
        }
        rear=temp;
        rear->link=NULL;
        count--;
        
    }
    void  display()
    {   
        cout<<"displaying queue"<<endl;
        if (count==1)
        {
            cout<<front->task;
        }

        else
        {
            Node* temp=front;
            while(temp!=rear)
            {
                cout<<temp->task<<"->";
                temp=temp->link;
            }
        cout<<rear->task<<endl;
        }
    }

};
int main()
{
    Queue q1("hi");
    q1.display();
    q1.enqueue("hello");
    q1.display();
    q1.enqueue("welcome");
    q1.display();
    q1.dequeue();
    q1.display();
    
    }
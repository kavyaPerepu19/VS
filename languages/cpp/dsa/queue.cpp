#include<iostream>
using namespace std;
class Node{
    public:
    Node* link;
    int data;
    Node(int data)
    {
        this->data=data;
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
    Queue(int data)
    {
        front= new Node(data);
        rear=front;
        cout<<"Queue is created"<<endl;
        count++;
    }
    
    void enqueue(int data)
    {   if(count==cap){
        cout<<"Cannot insert at max ";

    }
       else{
         Node * block= new Node(data);
        rear->link=block;
        rear=rear->link;
        cout<<"enque operation performed with data "<<data<<endl;
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
    int getParent(int child)
    {
        return (child-1)/2;
    }

    void  display()
    {   
        cout<<"displaying queue"<<endl;
        if (count==1)
        {
            cout<<front->data;
        }

        else
        {
            Node* temp=front;
            while(temp!=rear)
            {
                cout<<temp->data<<"->";
                temp=temp->link;
            }
        cout<<rear->data<<endl;
        }
    }

};
int main()
{
    Queue q1(4);
    q1.display();
    q1.enqueue(3);
    q1.display();
    q1.enqueue(6);
    q1.display();
    q1.dequeue();
    q1.display();
    for(int i=0;i<9;i++)
    {
        q1.enqueue(i);
    }
    q1.display();
    





}
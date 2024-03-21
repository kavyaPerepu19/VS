#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class cll{
    public:
    node* head;
    node* last;
    cll(int data)
    {
        head=new node(data);
        last=head;
        cout<<"cll created"<<endl;
    }
    
    void insertAtBeg(int data)
    {
        node * block;
        block=new node(data);
        block->next=head;
        head=block;
        last->next=head;
        cout<<"new node with data "<<head->data<<" added"<<endl;

    }
    void insertAtEnd(int data)
    {   
        node * block= new node(data);
        node * temp = head;
        
            while(temp->next!= head)
            {
                temp=temp->next;
            }
            temp->next=block;
            block->next=head;
            last=block;


        
    }
    void print()
    {
        node * temp = head->next;
        cout<<head->data<<"->";
        while(temp!=head)
        {   
            cout<<temp->data<<"->";
            temp=temp->next;
        }

    }


};
int main()
{
    cll list(5);
    list.insertAtBeg(3);
    list.insertAtEnd(4);
    list.insertAtEnd(6);
    list.print();
    // cout<<list.last->next->data;
    return 0;
}


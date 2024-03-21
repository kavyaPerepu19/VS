#include<iostream>
using namespace std;
class node{
    public:
    node* link;
    int data;
    node(int value)
    {
        data = value;
        link = NULL;
        
    }
};
class stack{
    public:
    node * top;
    int count =0;
    node *end;
    stack(int data){
        
        top =new node(data);
        end=top;
        cout<<"stack created"<<endl;
        count++;

    }
    void add(int data){
        node* block=new node(data);
        cout<<"node added"<<endl;
        block->link=top;
        top=block;
        count++;
    }
    void display(){
        cout<<"displaying stack"<<endl;
        node *temp=top;
        if (count==0){
            cout<<" stack is empty"<<endl;

        }
        else if(count==1)
        {
            cout<<top->data<<endl;
            cout<<"node count is "<<count<<endl;
        }
        else
        {
        while (temp->link!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->link;

            
        }
        cout<<temp->data<<" "<<endl;
        }
    }
    int pop()
    {   node* temp=top;
        int ans=top->data;
        top=top->link;
        temp->link=NULL;
        return ans;
    }
    void peak()
    {
        cout<<top->data<<endl;

    }
    bool isempty()
    {
        if(count)
            return false;
        return true;
    }
};
int main()
{
    stack s1(5);
    s1.add(10);
    s1.add(15);
    s1.add(20);
    s1.display();
    cout<<s1.pop()<<endl;
    s1.display();
    cout<<s1.isempty()<<endl;

}
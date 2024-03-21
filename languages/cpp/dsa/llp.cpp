#include<iostream>
using namespace std;
class node{
    public:
    node * link;
    int data;
    node(int data)
    {
        this->data=data;
        link=NULL;
    }
};
class list{
    public:
    node * head;
    int count=0;
    list(int data)
    {
        node * block = new node(data);
        head=block;
        cout<<"List created with data "<<head->data<<endl;
        count++;


    }
    void addEnd(int data){
        node * block= new node(data);
        node * temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=block;
        count++;
        cout<<"block added with data "<<temp->link->data<<endl;
    }
     void display()
     {  
        cout << "displaying list"<<endl;
        node * temp = head;
        while(temp!=NULL){
            cout <<temp->data;
            if(temp->link!=NULL)
            {
                cout<<"->";
            }
            temp=temp->link;
        }
     }


};
int main(){
    list li(2);
    li.addEnd(3);
    li.addEnd(4);
    li.display();

}
#include<iostream>
using namespace std;
class node{
    public:
    node* link;
    string data;
    node(string value)
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
    stack(string data){
        
        top =new node(data);
        end=top;
        //cout<<"stack created"<<endl;
        count++;

    }
    void add(string data){
        node* block=new node(data);
        //cout<<"node added"<<endl;
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
    string pop() 
    {   node* temp=top;
        string ans= top->data;
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
{   string s;
    cout<<"enter string"<<endl;
    getline(cin,s);
    stack s1  ("i");
    s1.add("have");
    s1.add("a");
    s1.add("dog");
    // for(int i=1;i<s.size();i++)
    // {
    //     s1.add(s[i]);
    // }
    //s1.display();
    cout<<"displaying reverse"<<endl;
    
        cout<<s1.pop()<<" ";
        cout<<s1.pop()<<" ";
        cout<<s1.pop()<<" ";
        cout<<s1.pop();
   
   

}
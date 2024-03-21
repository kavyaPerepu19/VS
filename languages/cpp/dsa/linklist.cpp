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
class list{
    public:
    node* head = NULL;
    int  count=0;
    list(int da)
    {   
        
        head = new node(da);
        
        cout<<"First block added"<<endl;
        count+=1;
        
    }
    void addlist(int da)
    {
        node* temp= head;
        count++;
        node * block= new node(da);
        while(temp -> link != NULL)
        {
            temp=temp->link;
            
        }
        
        temp->link=block;
        cout<<"new block added with data "<<temp->link->data<< endl;


    }
    void printlist()
    {   
        cout<<"displaying list"<<endl;
        node* temp= head;
        while(temp!= NULL)

        {  
            cout<<temp->data;
            if(temp->link!=NULL)
            {
            cout<<" -> ";
                
            }
            temp=temp->link;
        }
        cout<<"\nnode count is "<<count<<endl;
    
    }
    void addBeg(int da){
        count++;
        
        node * block= new node(da);
        
        block->link=head;
        head=block;
        
        cout<<"Node added at beginning"<<endl;
    }
    void AddAtLoc(int loc,int da)
    {   
        
    node * block=new node(da);
        node *temp=head;
        for(int i=1;i<loc-1;i++)
        {
            temp=temp->link;

        }
        node * temp2 = temp->link;
        temp->link=block;
        block->link=temp2;
              
        count++;
    }
    
    int delBeg(){
        cout<<"Deleted at beginning"<<endl;
        node *temp=head;
        int x=head->data;
        
        head=head->link;
        temp->link=NULL;
        temp=NULL;
        count--;
        return x; 
    }
    int delAtLoc(int loc)
    {   int ans=0;
        node *temp=head;
        for(int i=1;i<loc-1;i++)
        {
            temp=temp->link;

        }
        ans=temp->link->data;
        temp->link=temp->link->link;
        count--;
        return ans;
    }
    void delAtEnd()
    {   node* temp=head;
         while(temp ->link ->link != NULL)
        {
            temp=temp->link;
            
        }
        cout<<"Deleted at end"<<endl;
        cout<<"value of node"<<temp->link->data<<endl;
        temp->link=NULL;
        
        
        count--;

        

    }


};
int main()
{    int x=0;
    list li(20);
    li.addlist(25);
    li.addlist(40);
    li.printlist();
    li.addBeg(100);
    li.printlist();
    li.addBeg(120);
    li.printlist();
    x=li.delBeg();
    cout<<x<<endl;
    li.printlist();
    cout<<li.delAtLoc(2)<<endl;
    li.printlist();
    li.AddAtLoc(2,30);
    li.printlist();
    cout<<li.delAtLoc(4)<<endl;
    li.printlist();
    li.delAtEnd();
    li.printlist();




}
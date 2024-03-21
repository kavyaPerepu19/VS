#include<iostream>
using namespace std;

class node{
    public:
    node* flink;
    node* blink;
    int data;
    node(int value)
    {
        data = value;
        flink = NULL;
        blink= NULL;
        
    }


};
class list{
    public:
    node* head = NULL;
    node * tail=NULL;
    int  count=0;
    list(int da)
    {   
        
        head = new node(da);
         head->data=da;
         tail=head;
         head->blink=NULL;
         tail->flink=NULL;
        cout<<"First block added"<<endl;
        count+=1;
        
    }
    void addlist(int da)
    {
        node* temp= head;
        count++;
        node * block= new node(da);
        while(temp -> flink != NULL)
        {
            temp=temp->flink;
            
        }
        block->blink=temp;
        temp->flink=block;
        tail=block;
        cout<<"new block added with data "<<temp->data<< endl;


    }
    void printlist()
    {   
        cout<<"displaying list"<<endl;
        node* temp= tail;
        while(temp!= NULL)

        {  
            cout<<temp->data;
            if(temp->blink!=NULL)
            {
            cout<<" <- ";
                
            }
            temp=temp->blink;
        }
        cout<<"\nnode count is "<<count<<endl;
    
    }
    void addBeg(int da){
        count++;
        
        node * block= new node(da);
        
        block->flink=head;
        head->blink=block;
        head=block;
        block->blink=NULL;
        
        cout<<"Node added at beginning"<<endl;
    }
    void AddAtLoc(int loc,int da)
    {   
        
    node * block=new node(da);
        node *temp=head;
        for(int i=1;i<loc-1;i++)
        {
            temp=temp->flink;

        }
        node * temp2 = temp->flink;
        block->blink=temp;
        temp->flink=block;
        block->flink=temp2;
              
        count++;
    }
    
    int delBeg(){
        cout<<"Deleted at beginning"<<endl;
        node *temp=head;
        int x=head->data;
        
        head=head->flink;
        head->blink=NULL;
        temp->flink=NULL;
        temp=NULL;
        count--;
        return x; 
    }
    int delAtLoc(int loc)
    {   int ans=0;
        node *temp=head;
        for(int i=1;i<loc-1;i++)
        {
            temp=temp->flink;

        }
        ans=temp->flink->data;
        temp->flink=temp->flink->flink;
        (temp->flink->flink)->blink=temp;
        
        count--;
        return ans;
    }
    void delAtEnd()
    {   node* temp=head;
         while(temp ->flink ->flink != NULL)
        {
            temp=temp->flink;
            
        }
        cout<<"Deleted at end"<<endl;
        cout<<"value of node"<<temp->flink->data<<endl;
        (temp->flink)->blink=NULL;
        temp->flink=NULL;
        
        
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
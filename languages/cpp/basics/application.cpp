#include<iostream>
using namespace std;
class Array{
    public:
    int capacity;
    int size;
    string datatype;
    int a[];
    
    Array(int capacity,int size)
    {
        this->capacity=capacity;
        this->size=size;
        int *a=new int[capacity];
        cout<<"DEFAULT"<<endl;
        for(int i=0;i<size;i++)
        {
            a[i]=0;
            cout<<a[i]<<" ";
        }
    }
    Array(int capacity,int size,int b[]){
        this->capacity = capacity;
        this -> size = size;
        int *a= new int[capacity];
        for(int i=0;i<size;i++)
        {
            *(a+i)=b[i];
        }
       
    }
    void insert(int value){
        if (capacity==size){

            capacity=capacity*2;
        int *arr= new int [capacity];
        for(int i=0;i<size;i++)
        {
            arr[i]=a[i];
        }
        
        
        
        size++;
        int * a = new int [capacity];
        for(int i=0;i<size;i++)
        {
            a[i]=arr[i];
        }
        
    }
        a[size+1]= value;

    }

    void insert(int value,int index)
    {   

        int temp=a[index];
        size++;
        for(int i=size;i>index;i--)
        {
            a[i]=a[i-1];
            
        }
        a[index]=value;
        
    }

    void print(){
        for(int i=0; i< size;i++){
            cout<<a[i]<<" ";
            cout<<endl;

        }
    }

    };

int main()
{   int cap=7;

    Array a(7,3);
    // a.print();
}
#include<iostream>
using namespace std;
template <class t1,class t2>
class A{
    public:
    t1 num1;
    t2 num2;
    A(t1 num1,t2 num2){
        this->num1=num1;
        this->num2=num2;
    }
    void display(){
        cout<<num1<<" "<<num2;
    }
}; 

#include<iostream>
using namespace std;
class A{
    public:
    virtual void print()=0;//pure virtual fn
    // if a class contains atleast one pure virtual function it is called an abstract class

};
class B : public A{
    public:
    void print()
    {
        cout<<"HI"<<endl;
    }

};
class C : public A{
    public:
    void print()
    {
        cout<<"Bye";
    }

};
int main()
{
    B b1;
    C c1;
    b1.print();
    c1.print();

}


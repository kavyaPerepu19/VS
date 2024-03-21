#include<iostream>
using namespace std;
class A{
    public:
    string Name;
    int Age;
    A(string name,int age)
    {
        Name=name;
        Age=age;

    }
    void print()
    {
        cout<<Name<<" "<<Age;
    }

};
class B: public A{
    public:
    B(string name,int age):A(name,age)
    {

    }

};
int main()
{
    B b1("kavya",19);
    b1.print();
}
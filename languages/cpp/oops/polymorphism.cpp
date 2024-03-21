#include<iostream>
using namespace std;
class A{
    public:
    int Age;
    string Name;
    A(int age,string name)
    {
        Name=name;
        Age=age;

    }

};
class B:public A{
    public:
    B(int age,string name): A(age,name)
    {

    }
    void grow()
    {
        cout<<"class B grew"<<endl;
    }
};
class C:public A{
    public:

    C(int age,string name):A(age,name)
    {

    }
    void grow()
    {
        cout<<"class c grew";
    }
};
int main()
{
    B b1(19,"kavya");
    C c1(19,"kavya");
    b1.grow();
    c1.grow();
}
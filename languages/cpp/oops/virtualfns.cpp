#include<iostream>
using namespace std;
class A{
    public:
    int Num;
    A(int num)
    {
        Num=num;
    }
    virtual void Add()//declared as virtual fn
    {
        Num+=1;//increments Num
        cout<<Num<<endl;
    }
};
class B:public A{
    public:
    B(int num):A(num){

    }
    void Add()
    {
        cout<<"num is not changed";//does not change num
    }
};
int main()
{
    A a1(19);
    B b1(19);
    a1.Add();
    b1.Add();


}
//so in vfs the most derived version is executed;
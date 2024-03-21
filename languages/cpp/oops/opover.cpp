#include<iostream>
using namespace std;
class A{
    public:
    int num;
    A(int num){
        this->num=num;

    }
    friend int operator+(A a1,A a2) ;

};
int operator+(A a1,A a2)
{
    int ans=0;
    ans=a1.num+a2.num;
    return ans;

}
int main()
{
    A a1(2);
    A a2(5);
    int ans=operator+(a1,a2);
    cout<<ans;

}
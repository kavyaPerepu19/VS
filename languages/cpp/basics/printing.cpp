#include<iostream>
using namespace std;
void fun2(int n)
{
    if(n==0)
    return;

    fun2(n/2);
    cout<<n<<endl;

}



int main()
{
    fun2(8);
    return 0;
}

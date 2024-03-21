#include<iostream>
using namespace std;
int a[5]={1,2,3,9,5};
bool checksort(int a[],int n)
{
    if(n==1)
    {
        return true;
    }
    else{
        if (checksort(a+1,n-1) && a[0]<a[1])
        {
            return true;
        }
    }
}
int main()
{   bool flag=false;
    flag=checksort(a,sizeof(a)/sizeof(a[0]));
    cout<<flag;

}
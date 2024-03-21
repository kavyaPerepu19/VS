#include<iostream>
using namespace std;
int prime(int);
int reverse(int);
int main()
{
    int n;
    int rev;
    int Val;
    for(n=1;n<=1000;n++)
    {
    Val=prime(n);
    rev=reverse(n);
    if (Val==1 && n==rev)
    {
        cout<<n<<"\n";

    }
    
    }
    return 0;
}



 int prime(int a)
 {
    int div=0;
    for(int i=2;i<=a/2;i++)
    {
        if (a%i==0)
        {
            //cout<<i;
            div++;
        }
    }
    if (div==0)
    {
        return 1;
    }
    else{
        return 0;
    }
 }


 int reverse(int x)
 {
    int rev=0;
    int digit=0;
    while (x>0){
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;

    }
    //cout<<rev;
    return rev;
 }
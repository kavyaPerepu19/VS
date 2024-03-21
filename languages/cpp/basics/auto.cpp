#include<iostream>
#include<math.h>
using namespace std;
int digits(int);
int main()
{
    int n=10000;
    int dig=0;
    int x;
    int t;
    int temp=0;
    for(int i=1;i<=n;i++)
    {
        temp=digits(i);
        x=i*i;
        
        if((x% temp)==i)
        {
            cout<<i<<endl;
        }

    }
}
int digits(int x)
{
    int dig=0;
    int den=1;
  while (x>0)
  {
    dig+=1;
    x=x/10;
  }  
  for (int i=1;i<=dig;i++)
  {
    den=den*10;
  }
  return den;
}

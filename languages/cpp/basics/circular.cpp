
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a)
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
 
bool checkCircular(int N){

    int count = 0, temp = N;
    while (temp) {
        count++;
        temp /= 10;
    }
 
    int num = N;
    while (isPrime(num)) {
        int rem = num % 10;
        int div = num / 10;
        num = (pow(10, count - 1)) * rem + div;

        if (num == N)
            return true;
    }
 
    return false;
}
 
int main()
{
    int N ;
    cin>>N;
    if (checkCircular(N))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
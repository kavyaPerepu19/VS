#include <iostream>
using namespace std;
void funB(int n);
void funA(int n)
{
if (n > 0) {
cout <<" "<< n;
// fun(A) is calling fun(B)
funB(n - 1);
}
}
void funB(int n)
{
if (n > 1) {
cout <<" "<< n;
// fun(B) is calling fun(A)
funA(n / 2);
}
}
int main()
{
funA(20);
return 0;
}
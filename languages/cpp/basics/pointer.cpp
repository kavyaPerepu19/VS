#include<iostream>
using namespace std;
int main()
{
    int x = 6;
    int &y = x;
    y++;
    cout << &x<<&y;
}
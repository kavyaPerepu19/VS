#include <iostream>
using namespace std;
class polynomial
{
    public:
    int HighestDegree;
    int *a;
    polynomial(int degree)
    {
        HighestDegree = degree;
        a = new int[degree + 1];
    }

    friend polynomial operator+(polynomial p1, polynomial p2);
    

};
polynomial operator+(polynomial p1, polynomial p2)
{
    polynomial ans(p1.HighestDegree);
    for(int i = p1.HighestDegree; i > -1; i--)
    {
        ans.a[i] = p1.a[i] + p2.a[i];
    }
    return ans;
}
int main()
{
    int d1, d2;
    cout<<"Enter highest degree of first polynomial:";
    cin>>d1;
    polynomial p1(d1);
    int c, d;
    while(d1 > -1)
    {
        cout<<"Enter coefficient and  degree: ";
        cin>>c>>d;
        p1.a[d] = c;
        d1--;

    }
    cout<<"Enter highest degree of second polynomial:";
    cin>>d2;
    polynomial p2(d2);
    while(d2 > -1)
    {
        cout<<"Enter coefficient and  degree: ";
        cin>>c>>d;
        p2.a[d] = c;
        d2--;
    }
    polynomial ans = p1 + p2;
    for(int i = ans.HighestDegree; i > 0; i--)
    {
        cout<<ans.a[i]<<"x"<<i<<"+";
    }



}
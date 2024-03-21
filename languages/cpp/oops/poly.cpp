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
    void print()
    {
        for(int i=0; i< HighestDegree+1;i++)
        {
            cout<<a[i]<<" ";
        }
    }

   
    

};

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
    p1.print();
    
}
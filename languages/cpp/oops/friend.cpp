#include<iostream>
using namespace std;
class emp{
    public:
    int id;
    float sal;
    emp(int id, float sal){
        this->id=id;
        this->sal=sal;
    }
    friend emp  sal(emp e1, emp e2);
    
};
emp sal(emp e1, emp e2){
    if(e1.sal>e2.sal)
    return e1;
    else
    return e2;
}
int main()
{
    emp e1(1, 1000);
    emp e2(2, 2000);
    emp e3=sal(e1,e2);
    cout<<e3.sal;
    return 0;
}
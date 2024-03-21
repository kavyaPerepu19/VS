#include<iostream>
using namespace std;
class Name{
    public:
    string first;
    string last;
    Name(string first,string last)
    {
        this->first=first;
        this->last=last;
    }
};
int main()
{
    Name n1("kavya","Perepu");
    cout<<n1.first<<" "<<n1.last;
    return 0;
}

#include<iostream>
using namespace std;
void replace(string a,int cur){
    if (a.length()==2)
    {   if (a=="oo")
    {
        cout <<"kmit";
        return;
    }
        cout<<a;
        return;
    }

    if (a[0]=='o' && a[1]=='o')
    {
        cout<<"kmit";
        replace(a.substr(2),cur+2);
    }
    else{
        cout<<a[cur];
        replace(a.substr(1),cur+1);
    }
    

}
int main()
{
    replace("hoooolloo",0);
}
#include<iostream>
using namespace std;
void rev(string s)
{
    if(s.size()==1){
        cout<<s;
        return;
    }
    rev(s.substr(1));
    cout<<s[0];
}
int main(){
 rev("Hello");
}
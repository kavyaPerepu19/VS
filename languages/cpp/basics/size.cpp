#include<iostream>
using namespace std;
int main(){
    string s="today is tuesday.";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&& s[i]<='z')
        {
            s[i]= (char)(s[i]-('a'-'A'));
        }
    }
    cout<<s;
    }
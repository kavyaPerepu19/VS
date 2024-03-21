#include <iostream>
#include<stack>
using namespace std;
string isBalanced(string str)
{
    stack <char> st;
    for (int i=0;i<str.length();i++)
    {  
        if(st.empty())
        {
            st.push(str[i]);
        }
        else if(str[i]=='}' && st.top()=='{' || str[i]==']' && str[i]=='[' || str[i]==')' && st.top()=='(')
        {
            st.pop();
        }
        else{
            st.push(str[i]);
        }
    }
    if(st.empty())
    {
        return "is balanced";
    }
    else{
        return "is not balanced";
    }
}
int main()
{
    cout<<isBalanced("(({{]}}))");
}
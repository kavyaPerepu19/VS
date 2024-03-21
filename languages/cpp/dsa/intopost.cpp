#include <iostream>
#include <stack>
#include <cctype>

using namespace std;


int precedence(char op) {
    if (op == '^') return 3;
    else if (op == '*' || op == '/') return 2;
    else if (op == '+' || op == '-') return 1;
    else return -1;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string infixToPostfix(const string& infix) {
    stack<char> operatorStack;
    string postfix;

    for (char c : infix) {
       if(isalnum(c))
       {
        postfix+=c;
       }
       else if(c=='(')
       {
        operatorStack.push(c);

       }
       else if(c==')')
       {
        while(!operatorStack.empty() && operatorStack.top()!='(')
        {
            postfix+=operatorStack.top();
            operatorStack.pop();
        }
        operatorStack.pop();
       }
       else{
        while(!operatorStack.empty()&& precedence(c)<=precedence(operatorStack.top()))
        {
            postfix+=operatorStack.top();
            operatorStack.pop();
        }
       }
    }

    while (!operatorStack.empty()) {
        postfix += operatorStack.top();
        operatorStack.pop();
    }

    return postfix;
}

int main() {
    string infixExpression = "a+b*c-(d/e+f*g)-h";
    string postfixExpression = infixToPostfix(infixExpression);
    
    cout << "Infix Expression: " << infixExpression << endl;
    cout << "Postfix Expression: " << postfixExpression << endl;

    return 0;
}

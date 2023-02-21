#include <bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

string infixToPostfix(string &infix_expression)
{
    stack<char> stack;
    string postfix="";
    for (int i = 0; i < infix_expression.length(); i++)
    {
        if ((infix_expression[i]>= 'a' && infix_expression[i] <= 'z') || (infix_expression[i] >= 'A' && infix_expression[i] <= 'Z'))
        {
            postfix += infix_expression[i];
        }
        else if (infix_expression[i] == '(')
        {
            stack.push(infix_expression[i]);
        }
        else if (infix_expression[i] == ')')
        {
            while (!stack.empty() && stack.top() != '(')
            {
                postfix += stack.top();
                stack.pop();
            }
            stack.pop();
        }
        else
        {
            while (!stack.empty() && precedence(infix_expression[i]) <= precedence(stack.top()))
            {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(infix_expression[i]);
        }
    }

    while (!stack.empty())
    {
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

int main()
{
    string infix_expression;
    cin >> infix_expression;
    cout << infixToPostfix(infix_expression) << endl;
    return 0;
}
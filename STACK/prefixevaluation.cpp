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
    string postfix = "";
    for (int i = 0; i < infix_expression.length(); i++)
    {
        if (infix_expression[i] == ' ')
            continue;
        if ((infix_expression[i] >= 'a' && infix_expression[i] <= 'z'))
        {
            postfix += infix_expression[i];
        }
        else if (infix_expression[i] == '(')
        {
            stack.push(infix_expression[i]);
        }
        else if (infix_expression[i] == ')')
        {
            if (stack.empty())
            {
                cout << "Invalid expression: Missing opening parenthesis" << endl;
                return "";
            }
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
    if (!stack.empty() && stack.top() == '(')
    {
        cout << "Invalid expression: Missing closing parenthesis" << endl;
        return "";
    }
    while (!stack.empty())
    {
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

double Evaluate(string expression)
{
    stack<double> ex;
    int len = expression.size();
    for (int i = 0; i < len; i++)
    {
        if (expression[i] >= '0' && expression[i] <= '9')
        {
            ex.push(expression[i] - '0');
        }
        else
        {
            double num2 = ex.top();
            ex.pop();
            double num1 = ex.top();
            ex.pop();
            if (expression[i] == '+')
            {
                ex.push(num1 + num2);
            }
            else if (expression[i] == '-')
            {
                ex.push(num1 - num2);
            }
            else if (expression[i] == '*')
            {
                ex.push(num1 * num2);
            }
            else if (expression[i] == '/')
            {
                ex.push(num1 / num2);
            }
        }
    }
    return ex.top();
}
int main()
{
    string str;
    getline(cin, str);
    cout << infixToPostfix(str) << endl;
}
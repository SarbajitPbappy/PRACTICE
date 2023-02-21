#include<bits/stdc++.h>
using namespace std;

bool palindromchecker(string s)
{
    deque<char> pdequeu;
    int Len = s.length();
    for (int i = 0; i < Len; i++)
    {
        pdequeu.push_back(s[i]);
    }

    bool palindrome = true;

    while (pdequeu.size() > 1 && palindrome)
    {
        char first = pdequeu.front();
        pdequeu.pop_front();
        char last = pdequeu.back();
        pdequeu.pop_back();
        if (first != last)
        {
            palindrome = false;
        }
    }
    return palindrome;
}

int main()
{
    string str;
    cin>>str;
    if(palindromchecker(str))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    //s.pop_back();//delete last character of string
    //s.erase(s.begin()+0, s.end());//deleting any characters of a string.
    getline(cin,s);
    s.erase(s.begin());
   // s.erase(s.begin()+s.size()-1);
    s.pop_back();
    cout<<s<<endl;
}
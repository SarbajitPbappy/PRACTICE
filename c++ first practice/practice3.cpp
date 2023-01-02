#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            if(s[i]=='z'){
                s[i] = 'a';
            }
            else{
                s[i]++;
            }
        }
    }
    cout<<s<<endl;
}
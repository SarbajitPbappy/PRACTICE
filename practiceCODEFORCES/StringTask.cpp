#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string result;
    std::transform(s.begin(), s.end(), s.begin(),::tolower);
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            continue;
        }
        else{
            if(s[i]>='a' && s[i]<='z'){
                result+='.';
                result+=(s[i]);
            }
            else{
                result+='.';
                result+=s[i];
            }
        }
    }
    cout<<result<<endl;
}
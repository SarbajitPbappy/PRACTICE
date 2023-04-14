#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int count = 0;
    for(char c='a';c<='z';c++){
        int freq=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c) freq++;
        }
        if(freq%2!=0){
            count++;
        }
        if(count>1){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cin >> str;
    if(isPalindrome(str)){
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
}
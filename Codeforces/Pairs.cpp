#include<bits/stdc++.h>
using namespace std;
// bool compare(char a, char b) {
//     return a < b;
// }
// int countPair(string s){
//     int p=0;
//     transform(s.begin(), s.end(),s.begin(),::tolower);
//     sort(s.begin(), s.end(),compare);
//     for(int i=0; i<s.length()-1;i++){
//         if(s[i]==s[i+1]){
//             p++;
//             i++;
//         }
//     }
//     return p;
// }
int count(string s){
    int u=0,l=0;
    int ans;
    for(int i=0; i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            l++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            u++;
        }
    }
    if(u==l){
        ans=(u+l)/s.length();
    }
    else ans=(u+l)/2;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int l,o;
        string s;
        cin>>l>>o;
        cin>>s;
        cout<<count(s)<<endl;
    }
}
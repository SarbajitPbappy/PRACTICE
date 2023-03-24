#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        transform(s.begin(), s.end(),s.begin(),::tolower);
        s.erase(unique(s.begin(),s.end()),s.end());

            if(s=="meow"){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    int i=0;
    cin>>test;
    map<string,int>mp;
    while(i<test){
        string str;
        cin>>str;
        if(mp.count(str)!=0){
            cout<<mp[str]<<endl;
        }
        else cout<<"-1\n";
        mp[str]=i;
        i++;
    }
}
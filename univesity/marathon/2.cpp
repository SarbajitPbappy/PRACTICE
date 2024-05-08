#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    int mx=v[0];
    for(int i=0;i<a;i++){
        if(v[i]>mx){
            mx=v[i];
        }
    }
    cout<<mx<<endl;
}
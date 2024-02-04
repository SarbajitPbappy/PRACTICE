#include<bits/stdc++.h>
using namespace std;
bool sameParity(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        if((v[i]%2==0 && v[i+1]%2!=0)){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    if(sameParity(v)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v;
    while(t--){
        int a,b;
        cin>>a>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=v[i];
    }
    if(sum<150){
        cout<<"Counseling Support Required"<<endl;
    }
    else{
        cout<<"Counseling Support Not Required"<<endl;
        for(int i=0;i<3;i++){
            cout<<v[i]<<" ";
        }
    }
}
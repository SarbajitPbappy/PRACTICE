#include<bits/stdc++.h> 
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    int x=(2*a)/3;
    int y=(3*a)/4;
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=a-y;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    cout<<v[a/2]<<endl;
    for(int i=0;i<a;i++){
        cout<<v[i]<<" ";
    }
}
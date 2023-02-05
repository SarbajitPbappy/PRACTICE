#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>arr3;
    arr3.resize(n+m);
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());\
    merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),arr3.begin());
    for(int i=arr3.size()-1;i>=0;i--){
        cout<<arr3[i]<<" ";
    }
}
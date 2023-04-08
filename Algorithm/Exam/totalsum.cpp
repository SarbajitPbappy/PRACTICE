#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>arr,int n){
    if(n==1) return arr[0];
    return arr[n-1]+sum(arr,n-1);
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n)<<endl;
}
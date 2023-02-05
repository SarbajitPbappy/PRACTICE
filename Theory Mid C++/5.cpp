#include<bits/stdc++.h>
using namespace std;
int FindMax(vector<int>&arr,int n){
    if(n==1) return arr[0];
    return max(arr[n-1],FindMax(arr,n-1));
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<FindMax(arr,n)<<endl;
}
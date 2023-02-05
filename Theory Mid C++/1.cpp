#include<bits/stdc++.h>
using namespace std;
vector<int>reverse(vector<int>&arr){
    vector<int>a;
    for(int i=arr.size()-1; i>=0; i--){
        a.push_back(arr[i]);
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int>RevArray=reverse(arr);
    for(int i=0; i<RevArray.size(); i++){
        cout<<RevArray[i]<<" ";
    }
}
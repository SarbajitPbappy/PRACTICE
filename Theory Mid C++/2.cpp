#include<bits/stdc++.h>
using namespace std;

void deleteDuplicate(vector<int>&arr){
    sort(arr.begin(), arr.end());
    int j=0;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    arr.erase(arr.begin()+j+1, arr.end());
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    deleteDuplicate(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
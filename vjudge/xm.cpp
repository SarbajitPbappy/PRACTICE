#include<bits/stdc++.h>
using namespace std;
bool isSubset(vector<int>&a1,vector<int>&a2,int n1,int n2){
    int freq1[10000]={0};
    int freq2[10000]={0};
    for(int i=0;i<n1;i++){
        freq1[a1[i]]++;
    }
    for(int i=0;i<n2;i++){
        freq2[a2[i]]++;
    }
    for(int i=0;i<10000;i++){
        if(freq1[i]<freq2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n1,n2;
    cin>>n1;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    if(isSubset(arr1,arr2,n1,n2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(vector<int>arr,int key){
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(!LinearSearch(arr,key)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}
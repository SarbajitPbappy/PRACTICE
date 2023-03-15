#include<bits/stdc++.h>
using namespace std;
void sort(vector<int>&a){
    deque<int>dq;
    for(int i=0; i<a.size();i++){
        dq.push_back(a[i]);
    }
    deque<int>sorted;
    while(!dq.empty()){
        if(dq.front()<dq.back()){
            sorted.push_back(dq.front());
            dq.pop_front();
        }
        else{
            sorted.push_back(dq.back());
            dq.pop_back();
        }
    }
    while(!sorted.empty()){
        cout<<sorted.front()<<" ";
        sorted.pop_front();
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr);
}
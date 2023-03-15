#include<bits/stdc++.h>
using namespace std;
vector<int>sortedArray(vector<int>arr){
   deque<int>dq;
   vector<int>sortedLadder;
   for(int i=0;i<arr.size();i++){
    if(dq.empty() || arr[i]<dq.front()){
        dq.push_front(arr[i]);
    }
    else{
       while(!dq.empty() && arr[i]>dq.back()){
        sortedLadder.push_back(dq.back());
        dq.pop_back();
       } 
       dq.push_back(arr[i]);
   } 
}
    while(!dq.empty()){
    sortedLadder.push_back(dq.front());
    dq.pop_front();
}
return sortedLadder;
}
int main(){
    int n;
    cin >> n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    vector<int>ans=sortedArray(ar);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
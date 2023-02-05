#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    //n pass //for pass i -->n-1-i;
    //time complexity --> O(n^2)
    //memory complexity O(n)
    for(int i=0;i<n;i++){
        int index=i;
        while(index>=1){
            if(arr[index-1]>arr[index]){
                swap(arr[index-1],arr[index]);
                index--;
            }
            else{
                break;
            }
        }
    } 
    cout<<"After sorting:-->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
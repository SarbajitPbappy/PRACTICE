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
    for(int pass=0;pass<n;pass++){
        int last=n-1-pass;
        bool sorted=true;
        for(int j=0;j<=last-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted=false;
            }
            if(sorted){
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
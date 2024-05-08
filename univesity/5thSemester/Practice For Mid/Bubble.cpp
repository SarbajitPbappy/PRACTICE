#include<bits/stdc++.h>
using namespace std;

vector<int>BubbleSort(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        bool sorted= false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted=true;
            }
        }
        if(!sorted){
            break;
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>sorted = BubbleSort(arr);
    for(int i=0; i<sorted.size(); i++){
        cout<<sorted[i]<<" "; 
    }
}
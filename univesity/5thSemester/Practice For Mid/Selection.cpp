#include<bits/stdc++.h>
using namespace std;

vector<int>SelectionSort(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
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
    vector<int>sorted = SelectionSort(arr);
    for(int i=0; i<sorted.size(); i++){
        cout<<sorted[i]<<" "; 
    }
}
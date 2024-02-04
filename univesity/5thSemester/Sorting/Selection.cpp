#include<bits/stdc++.h>
using namespace std;
// vector<int>Selection_Sort(vector<int>arr){
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         int min=i;//point first index as minimum
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min]){
//                 min=j;//update minimum index
//                 int t=arr[min];//replace minimum index with current index
//                 arr[min]=arr[i];//replace current index with minimum index
//                 arr[i]=t;//replace minimum index with current index
//             }
//         }
//     }
//     return arr;
// }
vector<int>Selection_Sort(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[min_idx],arr[i]);
    }
    return arr;
}

int main(){
    vector<int>arr={5,4,3,2,1};
    vector<int>sorted=Selection_Sort(arr);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }
    return 0;
}
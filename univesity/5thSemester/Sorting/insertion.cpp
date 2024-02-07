#include<bits/stdc++.h>
using namespace std;
vector<int>InsertionSort(vector<int>arr){
    for(int i=1;i<arr.size();i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    return arr;
}
int main(){
    vector<int>arr={5,4,3,2,1};
    arr=InsertionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
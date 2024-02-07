#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>arr,int l,int r,int x){
    // int l=0,r=arr.size()-1;
    bool flag=false;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x){
            flag=true;
            return mid;
        }
        if(arr[mid]>x){
            return BinarySearch(arr,mid-1,l,x);
        }
        return BinarySearch(arr,mid+1,r,x);
    }
    return -1;
}
int main(){
    int n=5;
    vector<int>arr={1,2,3,4,5};
    int result= BinarySearch(arr,0,n-1,6);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
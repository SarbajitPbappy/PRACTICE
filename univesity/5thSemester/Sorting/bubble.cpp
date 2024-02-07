#include<bits/stdc++.h>
using namespace std;
vector<int>BubbleSort(vector<int>arr){
    for(int i=0;i<arr.size()-1;i++){
        bool sorted=false;
        for(int j=0;j<arr.size()-i-1;j++){
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
    vector<int>arr={5,4,3,2,1};
    arr=BubbleSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
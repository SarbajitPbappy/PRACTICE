#include<bits/stdc++.h>
using namespace std;
vector<int> Merge_sorting(vector<int>array){
    if(array.size()<=1) return array;
    vector<int>a;
    vector<int>b;
    int mid=array.size()/2;
    for(int i=0;i<mid;i++){
        a.push_back(array[i]);
    }
    for(int i=mid;i<array.size();i++){
        b.push_back(array[i]);
    }
    vector<int>Sorted_a=Merge_sorting(a);
    vector<int>Sorted_b=Merge_sorting(b);
    int idx_a=0,idx_b=0;
    vector<int>Sorted_array;
    for(int i=0;i<array.size();i++){
        if(idx_a==Sorted_a.size()){
            Sorted_array.push_back(Sorted_b[idx_b]);
            idx_b++;
        }
        else if(idx_b==Sorted_b.size()){
            Sorted_array.push_back(Sorted_a[idx_a]);
            idx_a++;
        }
        else if(Sorted_a[idx_a]<Sorted_b[idx_b]){
            Sorted_array.push_back(Sorted_a[idx_a]);\
            idx_a++;
        }
        else{
            Sorted_array.push_back(Sorted_b[idx_b]);
            idx_b++;
        }
    }
    return Sorted_array;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>sorted=Merge_sorting(arr);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }
    return 0;
}
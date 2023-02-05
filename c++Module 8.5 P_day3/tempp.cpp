#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>arr1;
vector<int>arr2;
vector<int> merging(vector<int>&a1, vector<int>&a2){
    vector<int>a3;
    a3.reserve(a1.size()+a2.size());
    a3.insert(a3.end(), a1.begin(), a1.end());
    a3.insert(a3.end(), a2.begin(), a2.end());
    return a3;
}
vector<int>Merge_Sort(vector<int>a){
    //base case
    if(a.size()<=1) return a;
    //divide in two part
    int mid=a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0;i<mid;i++){
        b.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++){
        c.push_back(a[i]);
    }
    vector<int>sorted_b=Merge_Sort(b);
    vector<int>sorted_c=Merge_Sort(c);
    vector<int>sorted_a;
    int index1=0;
    int index2=0;
    for(int i=0;i<a.size();i++){
        if(index1==sorted_b.size()){
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
        else if(index2==sorted_c.size()){
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else if(sorted_b[index1] > sorted_c[index1]){
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else{
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
    }
    return sorted_a;
}
void print(vector<int>&array){
    vector<int>final_Array=Merge_Sort(array);
    for(int i=0;i<final_Array.size();i++){
        cout<<final_Array[i]<<" ";
    }
}
int main(){
    cin>>n;
    arr1.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    arr2.resize(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>a=merging(arr1,arr2);
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    print(a);
    return 0;
}
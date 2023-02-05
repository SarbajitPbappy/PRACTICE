#include<bits/stdc++.h>
using namespace std;
vector<int>Merge_Sort(vector<int>a, int k){
    if(a.size()<=1) return a;
    int mid=a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0;i<mid;i++){
        b.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++){
        c.push_back(a[i]);
    }
    vector<int>sorted_b=Merge_Sort(b, k);
    vector<int>sorted_c=Merge_Sort(c, k);
    vector<int>sorted_a;
    int index1=0;
    int index2=0;
    int count = 0;
    for(int i=0;i<a.size();i++){
        if(index1==sorted_b.size()){
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
        else if(index2==sorted_c.size()){
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else if(sorted_b[index1] < sorted_c[index1]){
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else{
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
    }
    for(int i=0; i<sorted_a.size();i++){
        for(int j=i+1; j<sorted_a.size();j++){
            if(sorted_a[i]+sorted_a[j]==k){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return sorted_a;
}
int main(){
    int n,k;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    Merge_Sort(arr,k);
    return 0;
}
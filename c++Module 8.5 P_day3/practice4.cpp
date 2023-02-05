#include<bits/stdc++.h>
using namespace std;
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
        else if(sorted_b[index1] < sorted_c[index1]){
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
bool check_sum(vector<int>arr,int k){
    vector<int> sorted= Merge_Sort(arr);
    int i=0;
    int j=sorted.size()-1;
    while(i<j){
        if(sorted[i]+sorted[j]==k) return true;
        else if(sorted[i]+sorted[j]<k) i++;
        else j--;
    }
    return false;
}
int main(){
    int n,k;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    
    if(check_sum(arr,k)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
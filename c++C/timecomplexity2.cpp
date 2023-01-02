#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity=O(n)
Memory Complexity=O(n)
*/
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=a[0];
    int mini=a[0];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    cout<<sum<<endl;
    cout<<maxi<<endl;
    cout<<mini<<endl;
}
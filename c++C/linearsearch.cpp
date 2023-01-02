#include<bits/stdc++.h>
using namespace std;
/*
Time complexity = O(n)
Memory complexity =O(n)
*/
int main(){
    int n,k;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    //finding k is availabe in input or not
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"Yes"<<endl;
            break;
        }
    }
    //find the index of k for ones.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout <<i<<endl;
            break;
        }
    }
    //all possible index for k
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << i <<" ";
        }
    }

    cout << endl;
}

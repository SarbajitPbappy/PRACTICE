/*
Should be sorted.
1st iteration--> remove half of the array.
jotokkhon je element khujteci oita na mile totokkhon ei operation colte thakbe. 
0 iteration-->n
1 iteration-->n/2
2 iteration-->n/4
3 iteration-->n/8
n iteration-->n/2^n
here per iteration O(1).
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //left end and right end note down
    int low=0,high=n-1;
    bool flag=false;
    while(low<=high){
        int middle= (low+high)/2;
        if(arr[middle]==k){
            cout<<"Yes"<<" "<<middle<<endl;
            flag=true;
            break;
        }
        if(arr[middle]>k){
            high=middle-1;
        }
        else{
            //arr[middle]<k;
            low=middle+1;
        }
    }
    if(flag==false){
        cout<<"No"<<endl;
    }
    return 0;
}
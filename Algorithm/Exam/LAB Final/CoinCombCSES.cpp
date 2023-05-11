#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=101;
const int M=1e6+5;
const ll MOD=1e9+7;
ll tb[M];
int coin[N];
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    tb[0]=1;
    for(int i=0;i<x;i++){
        if(tb[i]>0){
            for(int j=0;j<n;j++){
                if(i+coin[j]<=x){
                    tb[i+coin[j]]=(tb[i+coin[j]]+tb[i]);
                    tb[i+coin[j]]%=MOD;
                }
            }
        }
    }
    cout<<tb[x]<<endl;
}

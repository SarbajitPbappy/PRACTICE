//MEMORIZATION METHOD:

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAXN=1e6+5;
vector<ll> dp(MAXN+5,-1);
ll tribonacci(ll n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    ll t=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    dp[n]=t;
    return t;
}

int main(){
    ll n;
    cin>>n;
    cout<<tribonacci(n);
    return 0;
}
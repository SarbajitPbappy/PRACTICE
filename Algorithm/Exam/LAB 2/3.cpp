//MEMORIZATION METHOD:
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAXN=1e6+5;
unordered_map<ll,ll> dp;
ll maxPoint(vector<ll> &frequency, ll n){
    if(n<0){
        return 0;
    }
    if(dp.count(n)){
        return dp[n];
    }
    ll score=max(maxPoint(frequency,n-1),maxPoint(frequency,n-2)+frequency[n]*n);
    dp[n]=score;
    return score;
}
int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n+1);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> frequency(MAXN+5);
    for(ll x:arr){
        frequency[x]++;
    }
    cout<<maxPoint(frequency,MAXN);
    return 0;
}

//TABULATION METHOD:
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAXN=1e6+5;
ll dp[MAXN+5];
ll maxPoint(vector<ll> &frequency, ll n){
    dp[0]=0;
    dp[1]=frequency[1];
    for(ll i=2;i<=n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+frequency[i]*i);
    }
    return dp[n];
}
int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n+1);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> frequency(MAXN+5);
    for(ll x:arr){
        frequency[x]++;
    }
    cout<<maxPoint(frequency,MAXN);
    return 0;
}
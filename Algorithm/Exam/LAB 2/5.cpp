//MEMORIZATION METHOD:

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAXN=1e6+5;
vector<ll> dp(MAXN+5,-1);

ll minSTEPS(int n){
    if(n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    ll ans=1+minSTEPS(n-1);
    if(n%3==0){
        ans=min(ans,1+minSTEPS(n/3));
    }
    if(n%2==0){
        ans=min(ans,1+minSTEPS(n/2));
    }
    return dp[n]=ans;
}

int main(){
    int n;
    cin>>n;
    cout<<minSTEPS(n);
    return 0;
}

//TABULATION METHOD:

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAXN=1e6+5;
vector<ll> dp(MAXN+5,-1);

ll minSTEPS(int n){
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=1+dp[i-1];
        if(i%3==0){
            dp[i]=min(dp[i],1+dp[i/3]);
        }
        if(i%2==0){
            dp[i]=min(dp[i],1+dp[i/2]);
        }
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<minSTEPS(n);
    return 0;
}
//MEMORIZATION METHOD:
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int MAXN=1e5;
ll dp[MAXN+5];

ll maxCoins(vector<ll>& arr, int n, int curr){
    if(curr>=n) return 0;
    if(dp[curr]!=-1) return dp[curr];
    dp[curr] = max(maxCoins(arr,n,curr+1), maxCoins(arr,n,curr+2)+arr[curr]);
    return dp[curr];
}

int main(){
    int test;
    cin >> test;
    for(int t=1;t<=test;t++){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        memset(dp, -1, sizeof(dp));
        for(int i=0;i<n;i++){
             cin >> arr[i];
        }
        cout << "Case " << t << ": " << maxCoins(arr,n,0) << "\n";
    }
    return 0;
}

//TABULATION METHOD:
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int MAXN=1e5;
ll dp[MAXN+5];

ll maxCoins(vector<ll>& arr, int n){
    dp[0] = 0;
    if (n > 0) dp[1] = arr[0];
    for(int i=2;i<=n;i++){
        dp[i] = max(dp[i-1], dp[i-2]+arr[i-1]);
    }
    return dp[n];
}

int main(){
    int test;
    cin >> test;
    for(int t=1;t<=test;t++){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        memset(dp, 0, sizeof(dp));
        for(int i=0;i<n;i++){
             cin >> arr[i];
        }
        cout << "Case " << t << ": " << maxCoins(arr,n) << "\n";
    }
    return 0;
}

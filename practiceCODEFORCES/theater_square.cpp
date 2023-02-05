#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a,ans;
    cin >> n >> m >> a;
    ans=(n+a-1)/a;
    ans*=(m+a-1)/a;
    cout<<ans<<endl;
}
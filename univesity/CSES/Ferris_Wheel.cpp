#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],n,x,ans;
bool isSpace[N];
void solve(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]>x){
            j--;
        }
        else{
            ans++;
            isSpace[i]=isSpace[j]=true;
            i++;j--;
        }
    }
    for(int i=0;i<n;i++){
        ans+=isSpace[i]==false;
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}

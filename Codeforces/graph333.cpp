#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int n,s,dis[N],mxd[N],b[N],ans[N];
vector<int> e[N];
void dfs(int u,int fa){
	dis[u]=dis[fa]+1;
	if(dis[u]>dis[s]) s=u;
	mxd[u]=max(mxd[u],dis[u]);
	for(int v:e[u]) if(v!=fa) dfs(v,u);
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(int i=1,u,v;i<n;++i){
		cin>>u>>v;
		e[u].push_back(v),e[v].push_back(u);
	}
	dis[0]=-1;
	dfs(1,0);
	dfs(s,0);
	dfs(s,0);
	for(int i=1;i<=n;++i)
		++b[mxd[i]];
	--b[mxd[s]],ans[n]=n;
	for(int i=n-1;i;--i)
		ans[i]=ans[i+1]-b[i];
	for(int i=1;i<=n;++i)
		cout<<ans[i]<<' ';
	return 0;
}

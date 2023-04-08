#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int src;
    cin>>src;
    vector<int>dist(n+1,INT_MAX);
    dist[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,src});
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        for(auto it:adj[u])
        {
            int v=it.first;
            int w=it.second;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}
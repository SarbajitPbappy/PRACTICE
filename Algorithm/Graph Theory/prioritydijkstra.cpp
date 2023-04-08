#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int nodes,edges;
int d[N],visited[N];
vector<pair<int,int>>adj_list[N];
const int INF=1e9;
void dijkstra(int src){
    for(int i=1;i<=nodes;i++){
        d[i] =INF;
    }
    d[src]=0;
    priority_queue<pair<int,int>>pq;
    pq.push({0,src});
    while(!pq.empty()){
        pair<int,int>head = pq.top();
        pq.pop();
        int selected_node = head.second;
        if(visited[selected_node]){
            continue;
        }
        visited[selected_node]=1;
        for(auto adj_node :adj_list[selected_node]){
            int node =adj_node.first;
            int cst = adj_node.second;
            if(d[selected_node]+cst<d[node]){
                d[node]=d[selected_node]+cst;
                pq.push({-d[node],node});
            }
        }
    }
}
int main(){
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }
    int src=1;
    dijkstra(src);
    for(int i=0;i<nodes;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}

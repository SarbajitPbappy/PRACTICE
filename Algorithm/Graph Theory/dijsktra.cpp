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
    for(int i=0;i<nodes;i++){
        int selected_node=-1;
        for(int j=1;j<=nodes;j++){
            if(visited[j]==1) continue;
            if(selected_node==-1 || d[selected_node]>d[j]){
                selected_node = j;
            }
        }
        visited[selected_node]=1;
        for(auto adj_node :adj_list[selected_node]){
            int node =adj_node.first;
            int cst = adj_node.second;
            if(d[selected_node]+cst<d[node]){
                d[node]=d[selected_node]+cst;
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

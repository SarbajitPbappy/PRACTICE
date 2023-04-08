#include<bits/stdc++.h>
using namespace std;
const int A=1e5+5;
vector<int>adj[A];
int visited[A];
void DFS_find_path(int node){
    visited[node]=1;
    for(int adj_node : adj[node]){
        if(visited[adj_node]==0){
            DFS_find_path(adj_node);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int src=1;
    DFS_find_path(src);
    if(visited[n]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
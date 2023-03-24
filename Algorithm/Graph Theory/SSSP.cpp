#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_list[N+1];
int lvl_array[N+1];
void bfs(int src){
    queue<int>q;
    visited[src]=1;
    lvl_array[src]=0;
    q.push(src);
    while(!q.empty()){
        int head=q.front();
        q.pop();
        for(int adj_node: adj_list[head]){
            if(visited[adj_node]==0){
                visited[adj_node]=1;
                lvl_array[adj_node]=lvl_array[head]+1;
                q.push(adj_node);
            }
        }
    }
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src=0;
    bfs(src);
    for(int i=0; i<nodes;i++){
        cout<<"Node "<<i<<"-> Level: "<<lvl_array[i]<<endl;
     }
}
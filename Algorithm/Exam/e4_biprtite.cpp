#include<bits/stdc++.h>
using namespace std;
const int A=1e5;
vector<int>adjacent_list[A];
bool is_bipartite(int vartex,vector<int>adj[]){
    vector<int>visited(vartex,-1);
    for(int i=0;i<vartex;i++){
        if(visited[i]==-1){
            queue<int>q;
            q.push(i);
            visited[i] = 1;
            while(!q.empty()){
                int head = q.front();
                q.pop();
                for(int adj_node: adj[head]){
                    if(visited[adj_node]==-1){
                        visited[adj_node] =1-visited[head];
                        q.push(adj_node);
                    }
                    else if(visited[adj_node] == visited[head]){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjacent_list[u].push_back(v);
        adjacent_list[v].push_back(u);
    }
    if(is_bipartite(m,adjacent_list)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
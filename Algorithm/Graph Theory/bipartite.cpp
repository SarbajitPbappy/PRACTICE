#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int visited[N], color[N];
vector<int> adj_list[N];

bool isBipartite(int src) {
    queue<int> q;
    visited[src]=1;
    color[src]=0;
    q.push(src);
    while(!q.empty()) {
        int head=q.front();
        q.pop();
        for(int adj_node : adj_list[head]) {
            if(visited[adj_node]==0) {
                visited[adj_node]=1;
                color[adj_node]=1-color[head];
                q.push(adj_node);
            }
            else if(color[adj_node]==color[head]) {
                // If adjacent nodes have the same color, then graph is not bipartite
                return false;
            }
        }
    }
    // If no adjacent nodes have the same color, then graph is bipartite
    return true;
}

int main() {
    int nodes, edges;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++) {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src=0;
    if(isBipartite(src)) {
        cout<<"Graph is bipartite"<<endl;
    }
    else {
        cout<<"Graph is not bipartite"<<endl;
    }
    return 0;
}

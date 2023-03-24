#include<bits/stdc++.h>
using namespace std;
int visited[505];
int n,m;
vector<int>adj_list[505];
bool cycle_detection(int node){
    visited[node]=-1;
    for(int adj_node: adj_list[node]){
        if(visited[adj_node]==0){
            bool isCycle = cycle_detection(adj_node);
            if(isCycle){
                return true;
            }
        }
        else if(visited[adj_node]==-1){
            return true;
        }
        else if(visited[adj_node]==1){
            continue;
        }
    }
    return false;
} 
int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    bool cycle_here = false;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            bool cycle_found=cycle_detection(i);
            if(cycle_found){
                cout<<"YES"<<endl;
                break;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}

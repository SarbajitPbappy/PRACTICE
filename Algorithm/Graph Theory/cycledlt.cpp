#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int visited[N];
int n,m;
/*
    visited[]==0 -> not visited
    visited[]==-1 ->paused node
    visited[]==1 ->done node
*/
vector<int>adj_list[N];
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
                cout<<"Cycle Exist"<<endl;
                cycle_here=true;
                break;
            }
            else{
                cout<<"No Cycle"<<endl;
            }
        }
    }
}

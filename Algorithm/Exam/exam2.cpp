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
    adj_list[0]={1,3,4};
    adj_list[1]={0,2,5};
    adj_list[2]={1,4};
    adj_list[3]={0};
    adj_list[4]={0,2,5};
    adj_list[5]={1,4};
    int src=0;
    bfs(src);
    for(int i=0; i<6;i++){
        cout<<"node "<<i<<"-> level: "<<lvl_array[i]<<endl;
     }
}
#include<bits/stdc++.h>
using namespace std;
//O(n^2)T
///O(n^2)S
int main(){
    int nodes=4;
    vector<pair<int,int>>adj_list[nodes];
    adj_list[0]={{1,2}};
    adj_list[1]={{2,4}};
    //adj_list[2]={};
    adj_list[3]={{1,7},{2,8}};
    // adj_list[0].push_back({1,2});
    // adj_list[1].push_back({2,4});
    // adj_list[3].push_back({1,7});
    // adj_list[3].push_back({2,8});//pair<int,int>(1,2)
    for(int i=0; i<nodes; i++){
        cout<<i<<"-->";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<"("<<adj_list[i][j].first<<" "<<adj_list[i][j].second<<"),";
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
//O(n^2)T
///O(n^2)S
int main(){
    int nodes=4;//O(1)
    vector<int>adj_list[nodes];//O(1)
    //O(E)//worst//O(n^2)
    adj_list[0]={1};
    adj_list[1]={0,2,3};
    adj_list[2]={3,1};
    adj_list[3]={2,1};
    //O(n^2)
    for(int i=0; i<nodes; i++){
        cout<<i<<"-->";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }
}
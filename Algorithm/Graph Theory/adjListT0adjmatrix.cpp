#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int nodes,edges;
//     nodes=9;
//     cin>>edges;
//     int adjMatrix[nodes+1][nodes+1];
//     for(int i=0;i<nodes;i++){
//         for(int j=0;j<nodes;j++){
//             adjMatrix[i][j]=0;
//         }
//     }
//     for(int i=0;i<edges;i++){
//         int u,v;
//         cin >> u >> v;
//         adjMatrix[u][v]=1;
//         adjMatrix[v][u]=1;
//     }
//     for(int i=0;i<nodes;i++){
//         for(int j=0;j<nodes;j++){
//             cout<<adjMatrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//    int edges,nodes;
//    cin>>nodes>>edges;
//    vector<int>adjList[nodes+1];
//    for(int i=0;i<edges;i++){
//     int u,v;
//     cin>>u>>v;
//     adjList[u].push_back(v);
//     adjList[v].push_back(u);
//    }
//    for(int i=0;i<nodes;i++){
//     cout<<i<<"--> ";
//     for(auto j:adjList[i]){
//         cout<<j<<" ";
//     }
//     cout<<endl;
//    }
// }
// const int maxN=100;
// int main(){
//     int nodes,edges;
//     cin >> nodes >> edges;
//     vector<pair<int,int> >adjList[maxN+1000];
//    for(int i=0;i<edges;i++){
//     int u,v,w;
//     cin>>u>>v>>w;
//     adjList[u].push_back({v,w});
//     adjList[v].push_back({u,w});
//    }
//    for(int i=0;i<nodes;i++){
//     cout<<i<<"--> ";
//     for(auto j:adjList[i]){
//         cout<<"{"<<j.first<<","<<j.second<<"}"<<" ";
//     }
//     cout<<endl;
//    }
// }
void insert(vector<int>adjList[],int nodes,int edges){
    adjList[nodes].push_back(edges);
    return;
}
void printadjList(vector<int>adjList[],int edges){
    for(int i=0;i<edges;i++){
        cout<<i<<"-->";
        for(auto j: adjList[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
vector<vector<int>> convert(vector<int>adjList[],int edges){
    vector<vector<int>> matrix(edges,vector<int>(edges,0));
    for(int i=0;i<edges;i++){
        for(auto j: adjList[i]){
            matrix[i][j]=1;
        }
    }
    return matrix;
}
void printMatrix(vector<vector<int> > adjList,int edges){
    for(int i=0;i<edges;i++){
        for(int j=0;j<edges;j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int edges=4;
    // cin>>edges;
    vector<int>adjList[edges+1];
    insert(adjList,0,1);
    insert(adjList,1,3);
    insert(adjList,1,2);
    insert(adjList,2,3);
    // insert(adjList,1,3);
    // insert(adjList,1,4);
    // insert(adjList,2,1);
    // insert(adjList,2,3);
    // insert(adjList,3,1);
    // insert(adjList,3,2);
    // insert(adjList,3,4);
    // insert(adjList,4,0);
    // insert(adjList,4,1);
    // insert(adjList,4,3);
    cout<<"Adjacent List: \n";
    printadjList(adjList,edges);
    vector<vector<int>>adjMatrix=convert(adjList,edges);
    cout<<"Adjacent Matrix: \n";
    printMatrix(adjMatrix,edges);
}
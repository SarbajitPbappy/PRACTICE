#include<bits/stdc++.h>
using namespace std;
//n2T
//n2S
int main(){
    int nodes=4;//1
    int matrix[nodes][nodes];
    for(int i =0;i<nodes;i++){//n2
        for(int j =0;j<nodes;j++){
            matrix[i][j]=0;
        }
    }
    // for(int i =0;i<nodes;i++){//n2
    //     for(int j =0;j<nodes;j++){
    //         matrix[i][j]=1;
    //     }
    // }
    //o(E)-->number of edge
    //O(n^2)
    matrix[0][1]=1;
    matrix[1][0]=1;

    matrix[1][2]=1;
    matrix[1][3]=1;

    matrix[2][1]=1;
    matrix[2][3]=1;

    matrix[3][1]=1;
    matrix[3][2]=1;
    //n2
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
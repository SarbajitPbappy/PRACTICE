#include<bits/stdc++.h>
using namespace std;
bool coinChange(int x,int y){
    int change = y-x;
    vector<int>coin = {25,13,9,7,2,1};
    for(int coins:coin){
        while(change>=coins){
        
        if(coins==7||coins==9){
            return true;
        }
            change-=coins;
        }
    }
    return false;
}
int main(){
    int x,y;
    cin>>x>>y;
    if(coinChange(x,y)){
        cout<<"Happy"<<endl;
    }
    else{
        cout<<"Sad"<<endl;
    }
}
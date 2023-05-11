#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main(){
    string str,tr;
    cin>>str>>tr;
    ll x=str.size();
    ll y=tr.size();
    vector<vector<int>>lcs(x+1,vector<int>(y+1,0));
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(str[i-1]==tr[j-1]){
                lcs[i][j]=lcs[i-1][j-1]+1;
            }
            else{
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    string solve;
    int i=x,j=y;
    while(i>0 && j>0){
        if(str[i-1]==tr[j-1]){
            solve+=str[i-1];
            i--;
            j--;
        }
        else{
            if(lcs[i-1][j]>lcs[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(solve.begin(),solve.end());
    cout<<solve<<endl;
}


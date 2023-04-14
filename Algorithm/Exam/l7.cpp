#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==0) return 0;
    int x=n%10;
    return solve(n/10)+x;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<"\n";
}
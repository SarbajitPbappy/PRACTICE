#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int a;
    cin>>a;
    ll fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    cout<<fact<<endl;
}
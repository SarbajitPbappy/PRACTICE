#include<bits/stdc++.h>
using namespace std;
/*
    time complexity O(1)
    memory complexity O(1)
*/
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max({a,b,c});
    int mini=min({a,b,c}); 
    int sum=a+b+c;
    int mul=a*b*c;
    cout<<maxi<<endl<<mini<<endl<<sum<<endl<<mul<<endl;
}
/*3number
max min multiplication and sum*/
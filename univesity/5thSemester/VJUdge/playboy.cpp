#include<bits/stdc++.h>
#define ll long long int
using namespace std;
unsigned int heights[50005];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }
    int q;
    while(q--){
        int x;
        cin >> x;
        unsigned int  *a = upper_bound(heights,heights+n,x );
        unsigned int  *b = a;--b;
        while(b>=heights && *b==x){
            --b;
        }
    }
        if(b>=heights){
            cout << *b<<" ";
        }
        else{
            cout<<" X "<<endl;
        }
        if(a==heights+n){
            cout<<"X"<<endl;
        }
        else{
            cout<<*a<<endl;
        }
}
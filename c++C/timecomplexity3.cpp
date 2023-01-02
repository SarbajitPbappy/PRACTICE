#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity=O(n^2)
Memory Complexity=O(n)
*/
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // i=0 ---> vitorer loop "n" bar coltece
    // i=1 ---> vitorer loop "n" bar coltece
    // i=2 ---> vitorer loop "n" bar coltece
    // i=3 ---> vitorer loop "n" bar coltece
    // i=n ---> vitorer loop "n" bar coltece
    // orthat loop coltece n*n times./ n^2.
    for(int i = 0; i < n; i++){
        string ans="No\n";
        for(int j = 0; j <n; j++){
            if(i==j) continue;
            if(a[i]==a[j]){
                ans="Yes\n";
            }
        }
        cout<<"i= "<<i<<", "<<ans;
    }
}
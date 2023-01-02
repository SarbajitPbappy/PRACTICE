#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin >> A;
    vector<int>set_a(A);
    for(int i=0;i<A;i++){
        cin >> set_a[i];
    } 
    cin>>B;
    vector<int>set_b(B);
    for(int i=0;i<B;i++){
        cin >> set_b[i];
    }
    sort(set_a.begin(), set_a.end());
    sort(set_b.begin(), set_b.end());
    vector<int>intersec;
    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            if(set_a[i]==set_b[j]){
                intersec.push_back(set_a[i]);
            }
        }
    }
    for(int i=0;i<intersec.size();i++) 
    cout << intersec[i] << " ";
}
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int elemnet1,element2;
    cin>>elemnet1;
    set<int>S1;
    for(int i=0; i<elemnet1; i++)
    {
        int elem;
        cin>>elem;
        S1.insert(elem);
    }
    cin>>element2;
    set<int>S2;
    for(int i=0; i<element2; i++)
    {
        int elem;
        cin>>elem;
        S2.insert(elem);
    }
    set<int>u_set;
    for(auto it:S1){
        u_set.insert(it);
    }
    for(auto ittt:S2){
        u_set.insert(ittt);
    }
    for(auto s:u_set){
        cout<<s<<" ";
    }
    cout<<endl;
}

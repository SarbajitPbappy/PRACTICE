#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    vector<float>b;
    for(int i=0;i<10;i++){
        a.push_back(i);
    }
    a.insert(a.begin()+0,100);
    for(int i=0;i<a.size();i++){
        cout << a[i] <<endl;
    }
    a.resize(10);  
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    double salary, sales;
    cin>>name>>salary>>sales;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salary+sales*0.15<<endl;
}
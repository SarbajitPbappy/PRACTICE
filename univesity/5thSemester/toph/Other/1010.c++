#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    double c,sum=0.0;
    int i=1;
    while(i<=2){
        cin>>a>>b>>c;
        double pay=b*c;
        sum=sum+pay;
        i++;
    }
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<sum<<endl;


}
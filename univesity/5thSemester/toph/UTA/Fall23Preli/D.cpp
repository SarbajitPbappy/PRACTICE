#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , p ,temp;
    int return_day = 0 ;

    cin>>n>>p;

    vector<int> arr;

    for (int i = 0 ; i < n ; i++) {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin() , arr.end(),greater<int>());
    int i = 0 ;
    while(p>0 && i <= n){
        if(p>=arr[i]) {
            if (((p/arr[i])*arr[i]) > 0){
                p -= ((p/arr[i])*arr[i]);
                return_day++;
            }
        }
        i++;
    }
    cout<<"Tami will be back after " <<return_day<< " days"<<endl;
}
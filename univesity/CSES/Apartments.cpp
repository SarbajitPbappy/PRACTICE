#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=2e5;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[N];
    int sizes[N];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<b;i++){
        cin>>sizes[i];
    }
    sort(arr,arr+a);
    sort(sizes,sizes+b);
    int ans=0,j=0,i=0;
    while(j<b && i<a){
            if(abs(arr[i]-sizes[j])<=c){
                ans++;
                i++;
                j++;
            }
            else{
                if(arr[i]-sizes[j]>c){
                    j++;
                }
                else{
                    i++;
                }
            }
    }
    cout<<ans<<endl;
}

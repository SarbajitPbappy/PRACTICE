#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int c=0,o=0,count=0;
        for(int i=0;i<n-1;i++){
            if((s[i]=='0' && s[i+1]=='1') || (s[i]=='1' && s[i+1]=='0')){
                count++;
            }
            if(s[i]=='0'){
                o++;
            }
            else{
                c++;
            }
        }
        if(s[n-1]=='0'){
            o++;
        }
        else{
            c++;
        }
        if(count>2 || ((s[0]=='1' && s[n-1]=='0')&& o!=0) || o==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
}
    return 0;
}
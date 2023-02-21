//1// int n;
    // cin>>n;
    // char ch;
    // while(n--){
    //     cin>>ch;
    //     if(ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'r'|| ch == 's')
    //         cout<<"YES"<<endl;
    //     else 
    //         cout<<"NO"<<endl;
    // }
    // return 0;
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
    int l,x=0,y=0;
    char str[55];
    int ans=0;
        cin>>l>>str;
        for(int i=0; i<l; i++){
            if(str[i]=='U') y++;
            else if(str[i]=='D') y--;
            else if(str[i]=='R') x++;
            else if(str[i]=='L') x--;
            if(x==1 && y==1) ans=1;
        }
        puts(ans?"YES":"NO");
    }
}

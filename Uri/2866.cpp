
#include<bits/stdc++.h>

using namespace std;

int I=1;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]>=97&&str[i]<=122)
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
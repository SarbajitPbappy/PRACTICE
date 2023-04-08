#include<bits/stdc++.h>
using namespace std;
# define ll long long
 
 
int main()
{
  
   ll t;
   cin>>t;
   while(t--)
   {
    ll n,m,k,i;
    cin>>n>>m;
    vector<ll>v;
    while(n--)
    {
       cin>>k;
       v.push_back(k);
    }
    sort(v.begin(),v.end());
    while(m--)
    {
      ll a,b,c;
      cin>>a>>b>>c;
      ll nn=v.size();
      auto it=lower_bound(v.begin(),v.end(),b);
      if(it==v.end()) it--;
      if((b-(*it))*(b-(*it))<4*a*c)
        cout<<"YES"<<endl<<(*it)<<endl;
      else{
        if(it!=v.begin()) it--;
        if((b-(*it))*(b-(*it))<4*a*c)
        cout<<"YES"<<endl<<(*it)<<endl;
      else cout<<"NO"<<endl;
        }
    }
    cout<<endl;
   }
  }
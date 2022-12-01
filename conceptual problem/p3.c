#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int ans;
    if(m==1&& n==1)
    ans=0;
    else if(m==1)
    ans=n-1;
    else if(n==1)
    ans=m-1;
    else ans=(m-1)*n;
    printf("%lld\n", ans);
}
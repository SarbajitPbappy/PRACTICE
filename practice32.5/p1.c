#include<stdio.h>
int power(int n,int m)
{
    if(m!=0)
    return n*power(n,m-1);
    else return 1;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ans=power(n,m);
    printf("%d\n",ans);
}
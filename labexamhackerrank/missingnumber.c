#include<stdio.h>
int main()
{
    int n,i,s,a,b,c,ar[100];
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&s, &a, &b, &c);
         ar[i] = s - (a + b + c);
    }
    for(i=1;i<=n;i++)
    {
       printf("%d\n", ar[i]); 
    }
}
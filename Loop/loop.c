#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
}
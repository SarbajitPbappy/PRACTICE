#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        printf("\n%d",n%10);
        sum+=n%10;
        n/=10;   
    }
    printf("\n%d",sum);
}
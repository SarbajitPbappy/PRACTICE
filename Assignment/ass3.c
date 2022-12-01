#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        sum+=rem;
    }
    printf("%d\n",sum);
}
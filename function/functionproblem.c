/* take a number 1.7must be present. 2.digit sum >10. 3.last digit must be prime */
#include<stdio.h>
int num(int x)
{
    while (x > 0)
    {
       if(x % 10 == 7) return 1;
        x /= 10;
    }
}
int digi_sum(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int prime(int x)
{
    int ld=x%10;
    if(ld==2 || ld%2!=0)
    return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(num(n)==1 && prime(n)==1 && digi_sum(n)>10)
    {
        printf("MY NUMBER\n");
    }
    else printf("NOT MY NUMBER\n");
}
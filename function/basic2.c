#include<stdio.h>
int gcd(int x,int y)
{
    int ans,i;
    for(i=x;i>=1;i--)
    {
        if(x%i==0 && y%i==0)
        {
            ans= i;
        }
    }
    return ans; 
}
int lcm(int n1,int n2)
{
    int max;
    if(n1>n2) max=n1;
    else max=n2;

    while (1)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
           return max;
        }
        ++max;
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD = %d\n",gcd(a,b));
    printf("LCM = %d\n", lcm(a,b));
}
#include<stdio.h>
int main()
{
    int a,b,GCD;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(a%i==0 && b%i==0)
            {
                GCD=i;
            }
        }
    }
    printf("The GCD of %d and %d is %d",a,b,GCD);
}
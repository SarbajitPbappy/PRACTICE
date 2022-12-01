//Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible
//by M.
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            printf("%d ",i);
        }
    }
}
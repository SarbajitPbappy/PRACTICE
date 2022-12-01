//Write a C program to take one integer N as input and print from 1 to N.(neg to positive)
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    if(n<0)
    {
        for(int i=1;i>=n;i--)
        {
            printf("%d ",i);
        }
    }
    else if(n>0)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
    }
    else printf("You Entered Zero");
}
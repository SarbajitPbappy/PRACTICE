//Write a C program to take one positive integer N as input and print from 1 to N.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
  for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
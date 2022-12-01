//Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours
// format). You need to print from N to M, if you need to start from beginning again, you can do that. See the
// sample input output for more clarification.
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
   for(n;n!=m;n++)
   {
       if(n==24)
       {
           n=0;
       }
       printf("%d ",n);
   }
   printf("%d ",n);
    
}
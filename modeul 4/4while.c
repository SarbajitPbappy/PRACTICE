#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("Number is: %d and Square of the %d is: %d\n",i,i,(i*i));
        i++;   
    }
}
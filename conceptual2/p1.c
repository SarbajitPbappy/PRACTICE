#include<stdio.h>
int main()
{
    int a,k,ans,i=1;
    scanf("%d %d", &a,&k);
    
    while(i<=k)
{
    int rem=a%10;
    if(rem!=0)
{
   a--;
}
else a/=10;
i++;
}
printf("%d\n", a);
}
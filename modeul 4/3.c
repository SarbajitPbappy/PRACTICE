#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    printf("The first 7 natural number is:\n");
    while(i<=n)
    {   
        printf("%d ",i);
        sum+=i;
        i++;
    }  
    printf("\n");  
    printf("The Sum of Natural Number upto 7 terms : %d\n",sum);
}
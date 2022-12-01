#include<stdio.h>
int main()
{
    int i=1,sum=0;
    printf("The first 10 natural number is:\n");
    while(i<=10)
    {
        printf("%d\t",i);
        sum+=i;
        i++;
    }
    printf("\n");
    printf("The sum is: %d",sum);
}
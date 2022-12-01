//clock
#include<stdio.h>
int main()
{
    int s,e;
    printf("Enter the start time:");
    scanf("%d",&s);
    printf("Enter the end time:");
    scanf("%d",&e);
    while(s!=e)
    {
        if(s>12) s%=12;
        // s=s%24;
        printf("%d ",s);
        s++;
        if(s==e) printf("%d ",s);
        
    }
}
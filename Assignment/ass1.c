#include<stdio.h>
int main()
{
    int max,min,a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max=a;
    min=a;
    if(min>b)
    min=b;
    else if(max<b)
    max=b;
    if(min>c)
    min=c;
    else if(max<c)
    max=c;
    if(min>d)
    min=d;
    else if(max<d)
    max=d;
    printf("Largest = %d\n",max);
    printf("Smallest = %d\n",min);
}
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    int* ptr;
    int* ptr2;
    scanf("%d %d",&a,&b);
    ptr=&a;
    ptr2=&b;
    sum=*ptr+*ptr2;
    printf("%.4f\n",sum/2.0);
}
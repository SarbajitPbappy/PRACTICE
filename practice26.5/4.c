#include<stdio.h>
#define PI 3.1416
float area(int n)
{
    if(n<=0)
    return 0;
    else 
    return PI*n*n;
}
int main()
{
    int r;
    scanf("%d",&r);
    double a=area(r);
    printf("%.6lf",a);
}
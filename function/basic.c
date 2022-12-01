#include<stdio.h>
int sum(int x, int y)
{
    return (x+y);
}
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d\n",sum(a,b));
}
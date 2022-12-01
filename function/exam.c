#include<stdio.h>
int add_three_nums(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int sum,x,y;
    scanf("%d %d",&x,&y);
    sum=add_three_nums(x,y,0);
    printf("%d\n",sum);
}

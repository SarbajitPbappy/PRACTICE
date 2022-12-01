#include<stdio.h>
int max_numbers(int x, int y, int z); 
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int m;
    m=max_numbers(a,b,c);
    printf("MAX = %d\n",m);
}
int max_numbers(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}

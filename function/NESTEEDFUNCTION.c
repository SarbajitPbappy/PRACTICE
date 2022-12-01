#include<stdio.h>
#include<math.h>
float f(int a, int b);
int absolute(int x);
float f(int x, int y)
{
    int temp = absolute(x - 3) + (y + 4) * (y + 4);
    return sqrt(temp);
}
int absolute(int x)
{
    if (x >= 0)
        return x;
    else
        return (-1) * x;
}
int main()
{
    int x=12,y=18;
    float ans=f(x,y);
    printf("%f\n", ans);
    return 0;
}
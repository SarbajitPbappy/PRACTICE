#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    int i,j;
    char c;
    int d;
    for(i=1;i<=test;i++)
    {
        int t;
        scanf("%d", &t);
        for(j=1;j<=2*t;j++)
        {
            scanf("%c %d", &c, &d);
        }
        int sum = 0;
        if (c == '+')
            sum += d;
        else if (c == '-')
            sum -= d;
        printf("Case %d:%d\n", i, sum);
    }
}
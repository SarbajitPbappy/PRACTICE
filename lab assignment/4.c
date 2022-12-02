#include <stdio.h>
void consecutive_even(int t)
{
    int n, i, div;
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        div = n / 4;
        printf("%d %d %d %d\n", div - 3, div - 1, div + 1, div + 3);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    consecutive_even(n);
}
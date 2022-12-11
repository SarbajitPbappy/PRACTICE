#include <stdio.h>
int naturalSum(int n)
{
    if (n == 0)
        return 0;
    return n + naturalSum(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", naturalSum(n));
}
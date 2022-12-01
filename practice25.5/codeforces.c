#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            if (j % 3 == 0 || j % 10 == 3)
            {
                n++;
            }
        }
        printf("%d\n", n);
    }
}

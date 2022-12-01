#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == n)
            {
                printf("%d", n);
            }
            else if (j > 1 && j < n && i > 1 && i < n)
            {
                printf(" ");
            }
            else
            {
                if (j == 1)
                {
                    printf("%d", i);
                }
                else
                {
                    printf("%d", j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
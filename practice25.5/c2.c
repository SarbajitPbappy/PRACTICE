#include <stdio.h>

int main()
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            printf("%d ", i + 2);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int l1, l2, r1, r2, n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
        if (r1 < l2 || l1 > r2)
        {
            printf("%d\n", l1 + l2);
        }
        else
        {
            printf("%d\n", l1 > l2 ? l1 : l2);
        }
    }
    return 0;
}

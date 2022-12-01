#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ar[a + 5], sum;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int flag = 0;
    for (int i = 0; i < a; i++)
    {
        sum = ar[i] + ar[i + 1];
        if (sum >= b)
        {
            flag ++;
        }
        // break;
        // else continue;
    }
    if (flag  > 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
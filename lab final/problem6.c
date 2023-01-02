#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        while (a <= b)
        {
            int flag = 0;
            for (int i = 2; i <= a / 2; i++)
            {
                if (a % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("%d ", a);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}

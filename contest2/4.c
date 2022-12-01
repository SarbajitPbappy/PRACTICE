#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int max1, max2, p, arr[12];
        scanf("%d", &p);
        int i;
        for (i = 0; i < p; i++)
        {
            scanf("%d", &arr[i]);
        }
        max1 = arr[0];
        for (i = 0; i < p; i++)
        {
            if (arr[i] > max1)
            {
                max1 = arr[i];
            }
        }
        max2 = arr[0];
        for (i = 1; i < p; i++)
        {
            if (arr[i] > max2 && arr[i] < max1)
            {
                max2 = arr[i];
            }
        }

        if (arr[i] == 100)
        {
            printf("%d\n", max2);
        }
        else
            printf("%d\n", max1);
    }

    return 0;
}

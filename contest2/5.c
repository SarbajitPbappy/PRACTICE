#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, arr[7];
    scanf("%d", &n);
    while (n--)
    {
        int i, sum = 0;
        for (i = 0; i < 6; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if (sum > 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

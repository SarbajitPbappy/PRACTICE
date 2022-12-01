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
        int count = 0, p, arr[101];
        scanf("%d", &p);
        int i;
        for (i = 0; i < p; i++)
        {
            scanf("%d", &arr[i]);
            int square = sqrt(arr[i]);
            if (arr[i] == square * square)
                count++;
        }
        if (count == 0)
            printf("-1\n");
        else
            printf("%d\n", count);
    }
    return 0;
}
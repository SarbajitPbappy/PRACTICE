#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, j, n, count = 0;
    char str[101];
    scanf("%d", &n);
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        for (j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j] && i != j)
                break;
        }
        if (j == strlen(str))
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

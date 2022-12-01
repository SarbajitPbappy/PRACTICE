#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, count1 = 0, count2 = 0;
        scanf("%d", &x);
        char a[20];
        scanf("%s", &a);

        for (int i = 0; i < x; i++)
        {
            if (a[i] == 'H')
                count1++;
            else
                count2++;
        }
        if (count1 > count2)
            printf("England\n");
        else
            printf("Pakistan\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        while (n > 0)
        {
            int rem = n % 10;
            if (rem == 1)
                printf("A");
            else if (rem == 2)
                printf("B");
            else if (rem == 3)
                printf("C");
            else if (rem == 4)
                printf("D");
            else if (rem == 5)
                printf("E");
            else if (rem == 6)
                printf("F");
            else if (rem == 7)
                printf("G");
            else if (rem == 8)
                printf("H");
            else if (rem == 9)
                printf("I");
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}
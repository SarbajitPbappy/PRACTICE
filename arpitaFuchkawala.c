#include <stdio.h>

int main()
{
    int n, arpita, barricade, count = 0;
    scanf("%d %d %d", &n, &arpita, &barricade);
    int fuchkawala[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &fuchkawala[i]);
        if (fuchkawala[i] > arpita)
            count++;
    }
    printf("%d", count);
    return 0;
}
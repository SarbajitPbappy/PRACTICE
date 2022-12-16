#include <stdio.h>
#include <math.h>
int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (arr[i] % 2 == 1 && arr[i] < x)
        {
            arr[i] = arr[i] * y;
        }
        else if (arr[i] % 2 == 0 && arr[i] > y)
        {
            arr[i] = arr[i] * y;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr);
    }
}

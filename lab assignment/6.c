#include <stdio.h>
int divisible_for_three(int arr[], int n)
{

    int i;
    int c = 0;
    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            c++;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {
            c--;
        }
    }
    return c;
}
int divisible_for_five(int arr[], int n)
{
    int i;
    int d = 0;
    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 5 == 0)
        {
            d++;
        }
    }
    return d;
}
int main()

{
    int n, i;
    scanf("%d", &n);
    int arr[n + 10];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = divisible_for_three(arr, n) + divisible_for_five(arr, n);
    if (sum != 0)
    {
        printf("%d", sum);
    }
    else
    {
        printf("-1");
    }
}
#include <stdio.h>
int main()
{
    int i, n, sum = 0, missing;
    scanf("%d", &n);
    int arr[n - 1];
    
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    missing = (n * (n + 1)) / 2 - sum;
    printf("%d", missing);

}
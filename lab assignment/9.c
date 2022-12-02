#include <stdio.h>
#include <conio.h>
float even_sum(int *arr, int n)
{
    int sum = 0;
    float count = 0.00;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }
    return (float)sum / count;
}
int prime_counter(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int prime = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 0 && arr[i] >= 2)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers: %d\n", prime_counter(arr, n));
    printf("Average of all even integers: %.2f\n",even_sum(arr, n));
}
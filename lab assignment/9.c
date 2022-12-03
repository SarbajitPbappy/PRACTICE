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
int prime_counter(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
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
    int* ptr;
    ptr=arr;
    int count=0;
    for(int i=0; i < n; i++)
    {
        if(prime_counter(*ptr))
        {
            count++;
        }
        ptr++;
    }
    printf("Prime numbers: %d\n", count);
    printf("Average of all even integers: %.2f\n",even_sum(&arr, n));
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort_ascending(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sort_descending(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n + 5], arr2[n + 5];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    sort_ascending(arr1, n);
    sort_descending(arr2, n);
    for(i=0;i<n;i++){
        printf("%d ",arr1[i]-arr2[i]);
    }
    return 0;
}

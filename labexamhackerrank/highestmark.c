#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int large=-1;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>large) large=arr[i];
    }
    int diff;
    for (i = 1; i <= n; i++)
    {
        diff= large-arr[i];
        printf("%d ", diff);
    }
}
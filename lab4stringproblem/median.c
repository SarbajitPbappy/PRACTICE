#include <stdio.h>
void sort(int arr[],int n)
{
    int i,j,temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
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
float find_median(int arr[], int n)
{
    float median=0;
    if(n%2==0)
    median = (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    else 
    median= arr[n / 2];
    return median;
}
int main()
{
    int arr[101];
    float median;
    int temp, n, i, j;
    scanf("%d",&n);
       for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    sort(arr,n);
    median=find_median(arr,n);
    printf("%.2f\n",median);
}
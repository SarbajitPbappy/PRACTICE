#include<stdio.h>
int main()
{
    int arr[1000];
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sorted_arr[n];
    
    for(j=0; j<n; j++)
    {
        int min =arr[0];
        int max =-1;
        int MIN_INDEX = 0;
        for(i=0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min=arr[i];
            MIN_INDEX=i;
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    sorted_arr[j]=min;
    arr[MIN_INDEX]=max+1;
    }
    for(i=0; i <n; i++)
    {
        printf("%d ",sorted_arr[i]);
    }
}
    

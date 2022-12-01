#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(i=0;i<n;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    int arr2[large+1];
    for(i=0;i<=large;i++)
    {
        arr2[i]=0;
    }
    for(i=0;i<n;i++)
    {
        arr[arr2[i]]++;
    } 
    int count=0;
    int value;
    scanf("%d", &value);
    for(i=large;i>=1;i--)
    {
       
        // printf("%d ",arr[i]);
        if(arr2[i]==1)
        {
            count++;
        }
        if(count==value)
        {
            printf("The %dth largest value is: %d\n",value,i);
            break;
        }
    }
}
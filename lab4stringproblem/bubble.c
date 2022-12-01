#include<stdio.h>
int main()
{
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int temp,n,i,j;
   // scanf("%d",&n);
//    for(i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    for(i=0; i<5; i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
}
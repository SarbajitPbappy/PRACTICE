#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int out=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<k)
        {
            out++;
        }
    }
    printf("%d", out);
}
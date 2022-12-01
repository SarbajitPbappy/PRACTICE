#include <stdio.h>
int find_sum(int n,int arr[])
{
    int sum=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%10==0)
        sum+=arr[i];
    }
    return sum;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=find_sum(n,ar);
    printf("%d\n",sum);
}
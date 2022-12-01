#include<stdio.h>
int main()
{
    long long int n,i,arr[200005],moves = 0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
        
    }
    for(i=1;i<=n;i++)
    {
        if (arr[i] < arr[i - 1])
        {
            moves+=arr[i - 1] - arr[i];
            arr[i]=arr[i - 1];
        }
    }
    printf("%lld", moves);
}

// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int k, i, n, count = 0;
    scanf("%d", &n);
    int ar[n + 1];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &k);
    for(i=1;i<=n;i++)
    {
        if(ar[i]>k || ar[i]<k)
        count++;
    }
    printf("%d\n",count);
    return 0;
}
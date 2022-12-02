#include <stdio.h>
int summation(int x,int arr[])
{
    int i;
    for (i = 1; i <= x; i++)
    {
        if ((arr[i] % 2 == 0 || i % 2 == 0) || (arr[i] % 2 != 0 || i % 2 != 0))
        {
            int sum = 0;
            for (i = 1; i <= x; i++)
            {

                if (arr[i] % 2 == 0 && i % 2 == 0)
                {

                    sum = sum + arr[i] + i;
                }
                else if (arr[i] % 2 != 0 && i % 2 != 0)
                {

                    sum = sum + arr[i] + i;
                }
            }
            return sum;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5];
    int j;
    for (j = 1; j <= n; j++)
    {
        scanf("%d", &a[j]);
    }
    int ans = summation(n,a);
    printf("%d", ans);
}
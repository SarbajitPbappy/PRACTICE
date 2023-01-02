#include <stdio.h>

int main()
{
    int test,S,i,j=1;
    scanf("%d", &test);
    while(j<=test)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &S);
        int flag = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == S)
            {
                printf("Case %d: %d\n", j, i + 1);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("Case %d: Not Found\n", j);
        }
        j++;
    }
    return 0;
}
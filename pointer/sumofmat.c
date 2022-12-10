#include <stdio.h>
int main()
{
    int n, m, a[100][100], b[100][100], sum[100][100], i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }   
    for (i = 0; i < n; i++)
    {
         for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int mat[105][105];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if ((mat[i][j] == (i + 1)) && (mat[i][j] == (j + 1)))
                printf("%d ", mat[i][j] + 3);
            else if ((mat[i][j] == (i + 1)) && (mat[i][j] != (j + 1)))
                printf("%d ", mat[i][j] + 2);

            else if ((mat[i][j] != (i + 1)) && (mat[i][j] == (j + 1)))
                printf("%d ", mat[i][j] + 1);
            else
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
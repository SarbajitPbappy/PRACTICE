#include <stdio.h>
void sort(int n, int *arr)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (*(arr + j) < *(arr + i))
            {

                t = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    sort(n, array);
    return 0;
}

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int array[10000];
    int n;
    int i;
    int index1;
    int index2;
    array[0] = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        scanf("%d %d", &index1,&index2);
        swap(&array[index1], &array[index2]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
}

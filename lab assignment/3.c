#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int *ptrX = &x;
    int *ptrY = &y;
    printf("%d ", *ptrX);
    printf("%d\n", *ptrY);
}
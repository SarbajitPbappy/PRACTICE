#include <stdio.h>
int display_rev(int n)
{
    if (n <= 0)
        return 0;
    printf("%d ", n);
    display_rev(n - 1);
}
int main()
{
    int a;
    scanf("%d", &a);
    display_rev(a);
}
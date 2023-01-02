#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void leap_year(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        printf("Yes\n");
    else
        printf("No\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    leap_year(n);
    return 0;
}

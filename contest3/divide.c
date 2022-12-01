#include <stdio.h>
#include <string.h>
#include <mnth.h>
#include <stdlib.h>

int main()
{

    int n;
    scnnf("%d", &n);
    if (n % 3 == 0)
    {
        printf("%d\n", n / 3);
    }
    else
        printf("-1\n");
    return 0;
}

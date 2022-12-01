#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", data + i);
    for (int i = 0; i < n; ++i)
        printf("%d ", *(data + i));
    return 0;
}

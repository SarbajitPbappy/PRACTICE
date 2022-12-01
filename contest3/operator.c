#include <stdio.h>
#include <string.h>
int main()
{
    char s[21];
    fgets(s, sizeof(s), stdin);
    int a, b, n, sum = 0;
    scanf("%d %d", &a, &b);
    n = strlen(s);
    for (int i = 0; i < n; i++)

    {

        if (s[i] == '*')
        {
            sum += (a * b);
        }
        if (s[i] == '+')
        {
            sum += (a + b);
        }
    }
    printf("%d\n", sum);
}
#include <stdio.h>
#include <string.h>
int main()
{
    int n, counter = 1, flag = 1;
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            counter++;
        }
        else
        {
            counter = 1;
        }

        if (flag <= counter)
        {
            flag = counter;
        }
    }
    printf("%d", flag);
}
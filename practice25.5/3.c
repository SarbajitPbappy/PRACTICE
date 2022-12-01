#include <stdio.h>
#include <math.h>
#include <string.h>
int check(char s[], int l)
{
    int score = 0, index;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
            score += s[j] - 'a' + 1;
        index = i + 1;
        break;
    }
    return score * index;
}
int main()
{
    char str[101];
    scanf("%s", str);
    int l = strlen(str);
    int a = check(str, l);
    if (a % 2 == 0)
    {
        int num = 0;
        while (a>1)
        {
            a/=2;
            num++;
        }
        printf("YES\n");
        printf("cost = 2^%d = %d", num, check(str, l));
    }
    else
        printf("NO\n");
}
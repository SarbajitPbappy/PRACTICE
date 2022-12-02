#include <stdio.h>
#include <string.h>

void new_string(char str[])
{
    char str1[10001];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            str1[j] = str[i];
            j++;
        }
        else
        {
            str1[j] = str[i];
            j++;
            str1[j] = str[i];
            j++;
        }
    }
    printf("%s",str1);
}
int main()
{
    char str1[10001];
    scanf("%s",&str1);
    new_string(str1);
    return 0;
}
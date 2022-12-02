#include <stdio.h>
#include <string.h>
void sort(char str[], int len)
{
    char temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] < str[j])
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
}
int main()
{
    int len;
    char str[1000];
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    sort(str, leny);
    printf("%s", str);
    return 0;
}
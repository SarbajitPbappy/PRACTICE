#include <stdio.h>
#include <string.h>
#define alphabet 26
void frequencySort(char *str)
{
    int frequency[alphabet] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        frequency[str[i] - 'a']++;
    }
    for (int i = 0; i < alphabet; i++)
    {
        for (int j = 0; j < frequency[i]; j++)
        {
            printf("%c", i + 'a');
        }
    }
}
int main()
{
    char str[1010];
    gets(str);
    frequencySort(str);
    return 0;
}
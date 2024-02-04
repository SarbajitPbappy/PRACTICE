#include <stdio.h>
#include <string.h>
int largestelement = 26; 
void sorting(char str[])
{
    int freq[largestelement]={0};
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < largestelement; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            printf("%c", i + 'a');
        }
    }
}
int main()
{
    char str[] = "adsarbrro";
    sorting(str);
}
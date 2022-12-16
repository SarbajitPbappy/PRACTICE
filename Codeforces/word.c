#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int s=0,c=0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        s++;
        if(str[i]>='A' && str[i]<='Z')
        c++;
    }
        if(s<c)
        {
        for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        }
        }
        else 
        {
        for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        }
        }
        printf("%s", str);
    }

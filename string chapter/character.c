#include<stdio.h>
#include<string.h>
#define max 1024

int main()
{
    char str[max];
    int i = 0;
    // fgets(str, max , stdin);
    fgets(str, max, stdin);
    while(i<=strlen(str))
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
        else if(str[i]>='A' && str[i]<'Z')
        str[i]+=32;
        i++;
    }
    puts(str);
}
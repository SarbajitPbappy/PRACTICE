#include<stdio.h>
#include<string.h>
void up(char* str)
{
    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        if(str[i]%2==0)
        str[i]-=32;
    }
    puts(str);
}
int main()
{
    char str[101];
    gets(str);
    up(str);
}
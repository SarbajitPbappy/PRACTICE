#include<stdio.h>
#include<string.h>
int main()
{
    char s[1024];
    gets(s);
    int p=strlen(s);
    int i=0;
    while(i<=p)
    {
        if(s[0]>='a' && s[0]<='z')
        s[i]-=32;
        i++;
    }
    puts(s);
}
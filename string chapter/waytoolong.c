#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]; 
    int p, i,n;
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        gets(s);
            if ((p = strlen(s)) > 10)
            printf("%c%d%c\n", s[0], p - 2, s[p - 1]);
        else
            puts(s);
        }
}
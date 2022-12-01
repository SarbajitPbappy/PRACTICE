#include<stdio.h>
int main()
{
    int x=0,n;
    scanf("%d",&n);
    while(n--)
    {
        char s[4];
        scanf("%s",s);
        if(s[1]=='+')
        x++;
        else x--;
    }
    printf("%d",x);
}
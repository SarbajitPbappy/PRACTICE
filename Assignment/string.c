#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101];
    int x;
    gets(s1);
    scanf("%d", &x);
    int i;
    for(i=0;s1[i]!='\0';i++)
    {
        if (s1[i] + x <=122)
            {
                s1[i] += x;
            }
        else if(s1[i]+x>=122)
        {
            s1[i]-=26;
            s1[i] += x;
        }
    }
    puts(s1);
}
#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int l=strlen(s);
    int i,j;
    char temp[101];
    for(i=0;i<l;i+=2)
    {
        for(j=i+2;j<l;j+=2)
        {
            if(s[i]>s[j])
            {
                temp[j] = s[i];
                s[i]=s[j];
                s[j]=temp[j];
            }
        }
    }
    for (i = 0; i < l; i++)
       { printf("%s", s);
        break;}
}
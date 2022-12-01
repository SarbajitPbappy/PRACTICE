#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",str);
    int len=strlen(str);
    int count=0;
    int i;
    for(i=0;i<len;i++)
    {
        for(int j=i+1;j<=len;j++)
    {
        if(str[i]==str[j]) break;
        else if(j==len) count++;
        else continue;
    }
    }
    printf("%d\n",count);
    if(count%2==0)
    printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n"); 
}
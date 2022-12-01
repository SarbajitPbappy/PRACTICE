#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    scanf("%s %s",s1,s2);
    int l1=strlen(s1);
    int counts1=0,counts2=0;
    for(int i=0;s1[i]!='\0';i++)
    {
            if (s1[i] >= 65 && s1[i] <= 90)
                s1[i] = s1[i] + 32;
            if (s2[i] >= 65 && s2[i] <= 90)
                s2[i] = s2[i] + 32;
            if (s1[i] > s2[i])
                {
                counts1++;
                break;
                }
                else if (s1[i] < s2[i])
                {
                    counts2++; break;
                }
        }
    if(counts1>counts2)
    printf("1\n");
    else if(counts1<counts2)
    printf("-1\n");
    else  printf("0\n");
    // int a=strcmp(s1,s2);
    // printf("%d\n",a);
}
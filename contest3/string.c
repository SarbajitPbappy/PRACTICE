#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++)
    {
        char str1[25], str2[25];
        scanf("%s",str1);
        int len = strlen(str1);
        int j,k;
        for(j=0,k=len-1;k>=0;k--,j++)
        {
            str2[j]=str1[k];
        }
        str2[j]='\0';
        int value = strcmp(str1, str2);
        
        if (value == 1 )
        {
            printf("Case #1: Not Palindrome\n");
        }
       else
       {
           if (len <= 7)
           {
               printf("Case #3: %s\n", str1);
           }
           else if (len > 7)
           {
               printf("Case #2: %c%d%c\n", str1[0], len - 2, str1[len - 1]);
           }
       }
            
    }
    return 0;
}
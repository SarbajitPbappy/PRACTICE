#include<stdio.h>
#include<string.h>
int max(int x,int y) {
    if(x>y) return x;
    else 
        return y;
}
int main()
{
    char str[1000000];
    scanf("%s",str);
    int a=1,g=1;
    for(int i=0;i<strlen(str);i++)
    {
        if ((str[i] == str[i + 1]))
        {
            a++;
        }
        else a=1;
        g=max(g,a);
    }
    printf("%d\n",g);
}
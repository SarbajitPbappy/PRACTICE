#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c)printf("They are equal");
    else if(a>b)
    {
        if(a>c)
        {
            printf("A is bigger");
        }
        else
        {
            printf("C is bigger");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B is bigger");
        }
        else 
        {
            printf("C is bigger");
        }
    }
}
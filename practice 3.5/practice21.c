#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b and b==c) printf("They are equal");
    else if(a==b && a>c && b>c ) printf("A and B both are bigger");
    else if(b==c &&  b>a && c>a) printf("B and C both are bigger");
    else printf("A and C both are bigger");
}
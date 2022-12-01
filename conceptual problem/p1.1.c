#include<stdio.h>
int main()
{
    int p1,p2,p3,p4;
    scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
    int winner1=-1,winner2=-1;
    if(p1>p2 && (p1>p3||p1>p4))
    winner1=p1;
    else if(p2>p1 && (p2>p3||p2>p4))
    winner1=p2;
    else if(p3>p1 && (p3>p2||p3>p4))
    winner2=p3;
    else if(p4>p1 && (p4>p2||p4>p3))
    winner2=p4;
    if(winner1!=-1&&winner2!=-1)
    printf("YES\n");
    else printf("NO\n");
}
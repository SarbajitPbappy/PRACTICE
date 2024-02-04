#include<stdio.h>
#include<math.h>
void max(int a, int b) 
{
    if(a>b)
    printf("Argentina");
    else if(b>a)
    printf("Brazil");
    else printf("Draw");
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    max(a,b);
}
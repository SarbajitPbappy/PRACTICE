#include<stdio.h>
int prime(int n)
{
    int flag=0;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag++;
    }
    if(flag==0 || n==2) printf("Prime\n");
    else printf("Not prime\n");
}
int even_odd(int m)
{
    if(m%2==0) printf("Even\n");
    else printf("Not even\n");
}
int biggest(int a,int b,int c)
{
    if(a>b && a>c) printf("%d is biggest\n",a);
    else if(b>a && b>c) printf("%d is biggest\n",b);
    else printf("%d is biggest\n",c);
}
int main()
{
    int x;
    scanf("%d",&x);
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    biggest(a,b,c);
    prime(x);
    even_odd(x);
}
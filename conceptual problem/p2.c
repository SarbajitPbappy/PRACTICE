#include<stdio.h>
int main()

{
    int a,b,c,mini,ans;
    scanf("%d %d %d",&a,&b,&c);
    // if((a+b)>(a+c))
    // {
    //     if((a+b)>(b+c))
    //     {
    //         printf("%d\n",a+b);
    //     }
    //     else printf("%d\n",b+c);
    // }
    // else 
    // {
    //     if((a+c)>(b+c))
    //     {
    //         printf("%d\n",a+c);
    //     }
    //     else printf("%d\n",b+c);
    // }
    if(a<b && a<c)
    mini=a;
    else if(b<c)
    mini=b;
    else mini=c;
    int sum=a+b+c;
    ans=(sum-mini);
    printf("%d\n",ans);

}
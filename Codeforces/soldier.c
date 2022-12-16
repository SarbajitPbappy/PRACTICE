#include <stdio.h>
int main()
{
    int cost=0,i=1,price,money,banana;
    scanf("%d %d %d",&price,&money,&banana);
    while(i<=banana)
    {
        cost+=price*i;
        i++;
    }
    int neededmoney=cost-money;
    if(neededmoney<0)
    {
        neededmoney=0;
    }
    printf("%d\n",neededmoney);
}
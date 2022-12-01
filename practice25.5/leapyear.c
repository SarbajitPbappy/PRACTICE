#include<stdio.h>
#include<limits.h>
// int leap_year(int n)
// {
//     if((n%400) || (n%4==0 && n%100!=0))
//     return 1;
//     else return 0;
// }
int distinct(int n)
{
    int ld;
    int count_digit[10]={0};
    int count=0;
    while(n)
    {
        ld = n % 10;
        count_digit[ld]=1;
        n/=10;
    }
    int i;
    for(i=0; i<10; i++)
    {
        if(count_digit[i])
        count++;
    }
    return count;
}
int count_digit(int n)
{
    int c=0;
    while(n)
    {
        int ld=n%10;
        c++;
        n/=10;
    }
    return c;
}
int next_distinct_number(int n)
{
    while(n<INT_MAX)
    {
        int distinct_number=distinct(n+1);
        int total=count_digit(n+1);
        if(distinct_number==total)
        {
            return n+1;
        }
        else n++;
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    // if(distinct(n)==1 && leap_year(n)==1)
    // printf("Distinct Year");
    // else printf("No Distinct Year");
    printf("%d",next_distinct_number(n));
}
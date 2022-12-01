#include<stdio.h>
int main()
{
    long long int n,temp;
    scanf("%lld",&n);
    long long int extract=n%10;
    long long int large=extract;
    if(large<extract)
    { 
        while(n!=0)
        {
            temp=n%10;
            n/=10;
        }
        large=n/10;
    }
    printf("%lld\n",large);
}
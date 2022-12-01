long long a,b;
main()
{
    scanf("%lld %lld",&a,&b);
    while(b--)
    {
        if(a%10!=0)
        {
            a-=1;
        }
        else
        a/=10;
    }
    printf("%lld",a);
}
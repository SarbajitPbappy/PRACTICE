long long n,k;
main()
{
    scanf("%lld %lld",&n,&k);
    if(k*2-1<=n)
    printf("%lld",k*2-1);
    else printf("%lld",(k-(n+1)/2)*2 );
}
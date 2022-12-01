n,h,x,r=0;
main()
{
    scanf("%d %d",&n,&h);
    while(n--)
    {
            scanf("%d",&x);
            if(x>h)
            {
                r+=2;
            }
            else r++;
    }
    printf("%d",r);
}
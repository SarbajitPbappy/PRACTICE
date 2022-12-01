a,b,c,d=0;
main()
{
    int m;
    scanf("%d", &m);
   while(m--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
        {
            d++;
        }
    }
     printf("%d ",d);
}
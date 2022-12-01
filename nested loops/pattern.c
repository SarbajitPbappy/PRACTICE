i,j,m;
main()
{
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        //printf("%d line",i);
        for(j=1;j<=i;j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
}
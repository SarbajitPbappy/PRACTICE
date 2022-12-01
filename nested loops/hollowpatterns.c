i,j,space,m;
main()
{
    scanf("%d",&m);
    for(i=1;i<=m-3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        for(i=1;i<=m-2;i++)
        {
            printf("*");
            for(j=1;j<=i;j++)
            {
                printf(" ");
            }
            printf("* \n");
        }
        for(j=1;j<=m;j++)
        {
            printf("* ");
        }
    }
}
 
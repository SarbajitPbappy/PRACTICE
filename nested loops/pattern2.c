i,j,space,m;
main()
{
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(space=1;space<=m-i;space++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
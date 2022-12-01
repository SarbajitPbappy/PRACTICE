m,n,i,c=0,arr[100];
main()
{
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=arr[n] && arr[i]>0)
        {
            c++;
        }
    }
    printf("%d",c);
}

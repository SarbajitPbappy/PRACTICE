m, ans, e = 0, o = 0, arr[105],i;
;
main()
{
  scanf("%d", &m);

  for (i = 1; i <= m; i++)
  {
      scanf("%d", &arr[i]);
  }
  for(i=1;i<= m; i++)
  {
      if (arr[i] % 2 == 0)
      {
          e++;
      }
      else
          o++;
  }
  
      if (e < o)
        {
              for (i = 1; i <= m; i++)
            {
              if(arr[i]%2==0)
              ans = i;
            }
        }
        else{
            for(i=1;i<=m;i++)
            {
                if(arr[i]%2==1)
                ans=i;
            }
        } 
    printf("%d\n", ans);
}
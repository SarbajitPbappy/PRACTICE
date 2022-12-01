#include<stdio.h>
int main()
{
    int sum1,sum2,n,ar[25],temp;
    int i,j,e=0,o=0,even[25],odd[25];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (ar[j]  < ar[j-1])
            {
                temp = ar[j];
                ar[j] = ar[j-1];
                ar[j-1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if(ar[i]%2==0)
        even[e]=ar[i];
        e++;
    }
    for (i = 0; i < n; i++)
    {
        if (ar[i] % 2 != 0)
            odd[o] = ar[i];
        o++;
    }
    int x=0,y=0;
    x=even[0];
    for(i=1;i< e;i++)
    {
        if(even[i]!=x)
        
            {y=even[i];
            break;}
    }
    int x1 = 0, y1 = 0;
    if(o>1)
    {
        x1 = odd[0];
        for (i = 1; i < o; i++)
        {
            if (odd[i] != x1)
            
                {y1 = odd[i];
                break;}
        }
    }
    sum1=x+y;
    sum2=x1+y1;
    if(sum1>sum2) printf("%d",sum1);
    else printf("%d",sum2);
    
}
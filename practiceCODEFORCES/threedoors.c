#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int key, ar[4];
        scanf("%d",&key);
        int i;
        for(i=1;i<=3;i++)
        {
            scanf("%d",&ar[i]);
        }
        int sum=0,temp;
        while(ar[key]!=0)
            {
                temp=ar[key];
                ar[key]=0;
                key=temp;
                sum++;
            }
        if(sum<2 || sum>2) printf("NO\n"); 
           else if(sum==2) printf("YES\n");
        
        
    }
}
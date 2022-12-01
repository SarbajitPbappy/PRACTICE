#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a;
        scanf("%d", &a);
            if(a==0)
            {
                printf("1\n");
            }
            else 
            {
                int ans=0;
                int i=0;
                while(a>ans)
                {
                    ans=pow(2,i);
                    i++;
                }
                printf("%d\n", ans);
            }
    }
}
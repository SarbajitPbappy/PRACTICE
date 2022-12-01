#include <stdio.h>
#include <math.h>

int main()
{
     int t;
     scanf("%d", &t);
     while (t--)

    {
     int n, sum = 0;
long long int c;
        scanf("%d %lld", &n, &c);
        int a[101];
        for (int i = 1; i <= n; i++)

        {
            
            scanf("%d", &a[i]);
            
            sum += a[i];
            
            
        }
        
if (sum * 2 <= c)

printf("Yes\n");
        else 
        printf("No\n");
        
    }

     return 0;
}
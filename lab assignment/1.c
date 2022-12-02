#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum=0,sum2=0;
    for(int i=0; i<n; i++)
    {
        for(int j=1;j<=3;j++)
        {
            if(i>n)
            break;
            sum+=i;
            i++;
        }
        for (int j = 1; j <= 3; j++)
        {
            if (i > n)
            break;
            sum2 += i;
            i++;
        }
    }
    printf("%d\n",sum-sum2);
}
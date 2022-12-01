
#include <stdio.h>

int main()
{
    int ar[105], i, n, j, counter;

   
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        counter = 0;
        for (j = 2; j < ar[i]; j++)
        {
            if (ar[i] % j == 0)
            {
                counter = 1;
                break;
            }
        }
        if (counter == 0 && ar[i]!=1)
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
    
}
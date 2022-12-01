#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int NOR;
        scanf("%d", &NOR);
        int ar[NOR+5];
        for(int i=0 ; i<NOR ; i++)
        {
            scanf("%d", &ar[i]);
        }
        int up_votes=0,down_votes=0;
        for(int i=0 ; i<NOR ; i++)
        {
            if(ar[i]==1)
            {
                up_votes++;
            }
            else if(ar[i]==2)
            {
                down_votes++;
            }
            else if (ar[i] == 3)
            {
                up_votes++;
            }
        }
        printf("%d\n", up_votes);
    }
    return 0;
}
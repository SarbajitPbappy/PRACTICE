#include<stdio.h>
int main()
{
    int i;
    // scanf("%d", &n);
    for( i = 1; i <= 3;i++)
    {
        for(int j = 1; j <=5; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
}
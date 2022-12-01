#include<stdio.h>
#include<math.h>
int main()
{
    int a,mat[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j]==1)
            {
                a=abs(2-i)+abs(2-j);
            }
        }
    }
    printf("%d\n",a);
}
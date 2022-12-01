#include<stdio.h>
int main()
{
     int i,j,row,col;
     scanf("%d %d",&row,&col);
     int arr[row][col];
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             scanf("%d",&arr[i][j]);
         }
     }
     if(row==col)
     {
         int ans=1;
         for (i = 0; i < row; i++)
         {
             for (j = 0; j < col; j++)
             {
                if(i==j)
                {
                    continue;
                }
                if(arr[i][j]!=0)
                {
                    ans=0;
                }
             }
         }
         if(ans==1)
         printf("diagonal matrix");
         else printf("not diagonal matrix");
     }
     else printf("not diagonal matrix");
    //  printf("The matrix is:\n");
    //  for (i = 0; i < row; i++)
    //  {
    //      for (j = 0; j < col; j++)
    //      {
    //          printf("%d ", arr[i][j]);
    //      }
    //      printf("\n");
    //  }
}
#include<stdio.h>
int main()
{
    int m, i=1;
    float sum, avg, x;
     scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("Enter The marks for %dth students: ",i);
        sum=0.0;
        for(int j=1;j<=3;j++)
        {
            scanf("%f",&x);
            sum+=x;
        }
        avg=sum/3.0;
        printf("Average: %.2f\n",avg);
    }
    float highest=avg;
   while(i<=m)
    {
        if(highest<avg)
        {
            highest=avg;
        }
        i++;
    }
    printf("Highes Average: %.2f\n", highest);
}
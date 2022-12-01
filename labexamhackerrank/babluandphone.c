#include<stdio.h>
int main()
{
    int t,i,a,b,c,d;
    scanf("%d", &t);
    int arr[t];
    char x;
    for(i=0; i<t; i++)
    {
        scanf("%d%c", &arr[i],&x);
    }
    for (i = 0; i < t; i++)
    {
        if (arr[i] <= 60)
        {
            arr[i]=(60-arr[i])+100;
        }
        else if(arr[i]<=80)
        {
            arr[i]=((80-arr[i])*2)+60;
        }
        else if(arr[i]>80)
        {
           arr[i]=((100-arr[i])*3);
        }
        else if(arr[i]==100)
        {
            arr[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d minutes\n",arr[i]);
    }
}
        
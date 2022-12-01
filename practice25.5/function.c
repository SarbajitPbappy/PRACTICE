#include<stdio.h>
#include<limits.h>
void find_max_min(int n,int* ar,int* max,int* min)
{
    int i;
    *max=ar[0];
    *min=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>*max)
        {
            *max=ar[i];
        }
        if(ar[i]<*min)
        {
            *min=ar[i];
        }
    }
}
int main()
{
    int n,max,min;
    scanf("%d",&n);
    int i,ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    find_max_min(n,ara,&max,&min);
    printf("MAX: %d\n",max);
    printf("MIN: %d\n",min);
}
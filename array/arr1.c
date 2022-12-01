#include<stdio.h>
int main()
{
    int arr[5],i;
    
    for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
int s_large=arr[0],large=arr[0];

for(i=0;i<5;i++) 
{
     if(large<arr[i])
    {
        s_large=large;
        large=arr[i];
    }
    else if(s_large<arr[i] && large!=arr[i])
    {
        s_large=arr[i];
    }
}

 printf("%d\n",large);
 printf("%d\n",s_large);
}
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&m);
    while(m--)
    {
       
   
            int b;
            scanf("%d %d",&i,&b);
            arr[i]+=b;   

        
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

}
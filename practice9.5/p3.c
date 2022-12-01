#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
        
    }
    int flag=0;
   for(i=1;i<=n-1;i++)
   if(arr[i]!=arr[i+1])
   flag++;
   if(flag>0)
    printf("No");
    else printf("yes");
    
    //  for(i=1;i<=n;i++)
    //     {
    //         if(arr[i]==arr[i])
    //         {
    //             flag++;
    //         }
           
    //     }
    //     if(flag==n) printf("NO");
    //     else printf("YES-");
  
    
}
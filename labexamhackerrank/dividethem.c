#include<stdio.h>  
  
 
  
int main()  
{  
    int N,a[105], arr1[105], arr2[105], i, pos, k1 = 0, k2 = 0;  
    
     scanf("%d",&N);
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    
    scanf("%d", &pos);  
  
    for(i = 0; i < N; i++)  
    {  
        if(i < pos)  
            arr1[k1++] = a[i];  
        else  
            arr2[k2++] = a[i];  
    }

    for (i = 0; i < k2; i++)
        printf("%d ", arr2[i]);
    for(i = 0; i < k1; i++)  
        printf("%d ", arr1[i]);  
  
    return 0;  
}  
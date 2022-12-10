#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;
    //scanf("%d", &n);
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }
    n=6;
    //scanf("%d",&n2);
    ptr=realloc(ptr, n*sizeof(int));
    for( int i=5; i<11; i++)
    {
        scanf("%d", (ptr+i));
    }
    for( int i=0; i<11; i++)
    {
        printf("%d ", *(ptr+i));
    }
    
}
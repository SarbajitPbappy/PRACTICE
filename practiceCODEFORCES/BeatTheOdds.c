#include<stdio.h>
int main()

{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int x;
        scanf("%d", &x);
        int arr[x+5];
        int i,count=0,sum=0;
        for(i=0; i<x; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0; i<x; i++)
        {
            if(arr[i]%2==0)
            count++;
            else sum++;
        }
        if(count>sum)
            printf("%d\n", sum);
            else printf("%d\n", count);
    }
}
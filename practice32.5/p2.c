#include<stdio.h>
int lastSum(int n,int arr[])
{
    if(n==0) return 0;
    int last=arr[n-1]%10;
    int sum=last+lastSum(n-1,arr);
    return sum;
}
int main()
{
    int test,i;
    scanf("%d",&test);
    int arr[test];
    for(i=0; i<test; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum = %d\n", lastSum(test, arr));
}
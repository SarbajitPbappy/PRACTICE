#include<stdio.h>
int solve(int a[],int i,int n)
{
    if(i==n) return 0;
    int sum=solve(a,i+1,n);
    return sum+a[i];

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",solve(arr,0,n));
}
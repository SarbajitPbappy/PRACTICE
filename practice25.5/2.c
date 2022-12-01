#include<stdio.h>
void sort(int ar[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}
int find_n_largest(int ar[],int n, int x)
{
    return ar[n-x];
}
int find_n_smallest(int ar[],int n, int x)
{
    return ar[x-1];
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int i,ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    sort(ar, n);
    scanf("%d",&k);
    int l = find_n_largest(ar,n, k);
    int s = find_n_smallest(ar, n,k);
    printf("%dth largest element=%d\n",k,l);
    printf("%dth smallest element=%d",k,s);
}



#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int ratio(int n,int r)
{
    //int r;
    scanf("%d",&r);
    return factorial(n)/factorial(r);
}
int main()
{
    int n,r;
    scanf("%d",&n);
    // int permutation=factorial(n)/factorial(n-r);
    // int combination=factorial(n)/(factorial(n-r)*factorial(r)); 
    // printf("nPr = %d\n", permutation);
    // printf("nCr = %d\n", combination);
    printf("%d",ratio(n,r));
}
#include<stdio.h>

int main()
{
    long long int n;
    scanf("%d", &n);
    int hand_shake;
    hand_shake =(n*(n-1))/2;
    printf("%d", hand_shake);
}
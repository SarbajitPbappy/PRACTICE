#include<stdio.h>
void print(int n)
{
    if(n>0){
        print(n-1);
        printf("%d ", n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
}
#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if(number>=0 && number<=32) printf("F");
    else if(number<=39) printf("D");
    else if(number<=49) printf("C");
    else if(number<=59) printf("B");
    else if(number<=69) printf("A-");
    else if(number<=79) printf("A");
    else if(number<=100) printf("A+");
}
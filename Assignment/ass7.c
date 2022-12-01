#include<stdio.h>
int main()
{
    int a;
    char c='.',c1=',';
    scanf("%d", &a);
    int i=1;
    printf("The factors of %d are: ",a);
    while(i<=a)
    {
        if(a%i==0)
       { 
           printf("%d",i);
           if(i==a)
           {
               printf("%c",c);
           }
           else printf("%c",c1);
       }
        i++;
    }   
}
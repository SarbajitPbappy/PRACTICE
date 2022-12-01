#include<stdio.h>
#define MAX 1000000
int main()
{
    char string[MAX];
    fgets(string,MAX,stdin);
    int v=0,i=0;
    //for(int i=0;i<=strlen(string);i++)//for(int j=0;string[i]!='\0';j++)
    // printf("%s",string);
    while(string[i]!='\0')
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
        v++;
        i++;
    }
    printf("Number of vowels: %d\n",v);
}
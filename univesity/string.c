#include<string.h>
#include<stdio.h>
char location[101]; /* for the input with number and letter */
int house=0; /* for the integer that will be separated from the string */
char str[101];
int main()
{
    printf("Input: ");
    scanf("%s", location);
    int x;
    for (x = 0; location[x] != '\0'; x++)
    {
        if (location[x] >= '0' && location[x] <= '9')
        {
            house = (house * 10) + (location[x] - 48);
        }
    }
    if(house%7==0)
        printf("int part = %d \n", house);
else if(house%7==1)
{
    for(x=0;location[x]!='\0';x++)
    {
        if(location[x]>='a' && location[x]<='z')
        continue;
        else break;
    }
    puts(location);
}
    return 0;
}
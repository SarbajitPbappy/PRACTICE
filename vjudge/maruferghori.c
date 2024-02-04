#include<stdio.h>
#include<windows.h>
int main()
{
    int hour,minute,second;
    int d=1000;
    printf("Set time \n");
    scanf("%d %d %d",&hour,&minute,&second);
    if(hour>12 || minute>59 || second>59)
    {
        printf("Error Input");
        exit(0);
    }
    while(1)
    {
        second++;
    if(second>59){
        minute ++ ;
    second=0;}
    if(minute>59)
    {
        hour++;
        minute=0;
    }
    if (hour>12)
    {
        hour =1;
    }
    printf("Time:\n");
    printf("%02d : %02d : %02d",hour,minute,second);
    Sleep(d);
    system("cls");
    }

}




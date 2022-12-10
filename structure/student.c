#include<stdio.h>
struct student{
    int roll;
    char name[50];
    double number;
}class[50];
void printStudent(int n,struct student s)
{
        printf("Student information for %d\n", n);
        printf("Roll-->%d\n", s.roll);
        printf("Name-->%s\n", s.name);
        printf("Number-->%.2lf\n", s.number);
}
double sum(int n,struct student add)
{
    double s=0.0;
    for(int i=1;i<=n;i++)
    {
        if(add.roll%2==0)
        s+=add.number;
    }
    return s;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&class[i].roll);
        fflush(stdin);
        gets(class[i].name);
        fflush(stdin);
        scanf("%lf",&class[i].number);
        fflush(stdin);
    }
    double summation=0.0;
    for(i=1;i<=n;i++)
    {
        if(class[i].roll%2==0)
        {
            printStudent(i,class[i]);
            printf("\n");
            summation = sum(i, class[i]);
        }
    }
    printf("Sum off Even Roll Students Number=%.2lf\n",summation);
}
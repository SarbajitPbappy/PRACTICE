#include<stdio.h>
struct student{
    char name[50];
    int roll;
    int marks;
}s[100];
void display(int x,struct student p)
{
    printf("Displaying Information:\n");
    printf("Name: %s\n",p.name);
    printf("Roll Number: %d\n",p.roll);
    printf("Marks: %d\n",p.marks);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter information:\n");
        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);
        fflush(stdin);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
        fflush(stdin);
    }
    for (i = 0; i < n; i++){
        display(i, s[i]);
    }
}
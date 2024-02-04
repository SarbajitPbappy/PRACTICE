i;
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>
int waiver_calc(int semester_fee, int waiver); 
struct student
{
    char name[50];
    char id[25];
    char phone[15];
    float cgpa;
    int semester_fee;
    int waiver;
    int payable_fee;
} stu[10000];
void display_info(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t\t\tInformation For Student: %d\n", i+1);
        printf("\tStudent Name : %s\n", stu[i].name);
        printf("\tStudent ID   : %s\n", stu[i].id);
        printf("\tPhone Number : %s\n", stu[i].phone);
        printf("\tCGPA         : %.2f\n", stu[i].cgpa);
    }
}
void display_seperate_fee()
{
    int semester_fee = 105000;
    stu[i].payable_fee = semester_fee - waiver_calc(stu[i].semester_fee, stu[i].waiver);
    printf("\tPayable Fee  : %d\n", stu[i].payable_fee);
}
void display_fee(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t\t\tFee's Of Student: %d\n", i+1);
        printf("\tStudent ID   : %s\n", stu[i].id);
        printf("\tWaiver       : %d\n", stu[i].waiver);
        int semester_fee=105000;
        stu[i].payable_fee = semester_fee - waiver_calc(stu[i].semester_fee, stu[i].waiver);
        printf("\tPayable Fee  : %d\n", stu[i].payable_fee);
    }
}
int waiver_calc(int semester_fee, int waiver)
{
    semester_fee=105000;
    if (waiver==50)
        {
            return (semester_fee * .5);
        }
        else if (waiver == 35)
        {
            return (semester_fee * .35);
             
        }
        else if (waiver == 10)
        {
            return (semester_fee * .1);
             
        }
        else if ( waiver== 20)
        {
            return (semester_fee * .2);
         }
}
void addStudent(int n, int new_stu)
{
    char c;
    for (int i = n; i < n + new_stu; i++)
    {
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Enter Student Name: ");
        gets(stu[i].name);
        printf("Enter Student ID: ");
        gets(stu[i].id);
        printf("Enter Student Phone NO: ");
        scanf("%s", stu[i].phone);
        printf("Enter Student CGPA: ");
        scanf("%f", &stu[i].cgpa);
        printf("Enter Student WAIVER: ");
        scanf("%d", &stu[i].waiver);
    }
}

void sort(int n)
{
    struct student temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (stu[i].cgpa > stu[j].cgpa)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}

void display_choice()
{
    printf("\t\t\t<<<<<<Enter Your choice>>>>>>\n");
    printf("1.Add New Student Info\n");
    printf("2.Sort Student as their CGPA\n");
    printf("3.Display Information of Student\n");
    printf("4.Display Fee Information\n");
    printf("5.Display Separate Fee Information\n");
    printf("0.For Quit\n");
}
int main()
{
    int n=0,new_stu;
    while(1)
    {
        display_choice();
        int choice;
        printf("\t\t<<<<Enter Your Choice>>>>\n");
        scanf("%d",&choice);
        if (choice == 1)
        {
            printf("How many student you want to add: ");
            scanf("%d", &new_stu);
            addStudent(n, new_stu);
            n += new_stu;
        }
        else if (choice == 2)
        {
            sort(n);
        }
        else if (choice == 3)
        {
            display_info(n);
        }
        else if (choice == 4)
        {
            display_fee(n);
        }
        else if (choice == 5)
        {
                char c;
                while ((c = getchar()) != '\n' && c != EOF);
                printf("Enter ID: ");
                gets(stu[i].id);
                printf("Enter Student WAIVER: ");
                scanf("%d", &stu[i].waiver);
                display_seperate_fee();
        }
        else if (choice == 0)
        {
            break;
        }
    
    }
}

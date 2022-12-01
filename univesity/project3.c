#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct person
{
    char name[35];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char gender[8];
    char mail[100];
    char citision_no[20];
};
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();
int main()
{
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    printf("\n\t**********WELCOME TO PUBLIC RECORD**********");

    printf("\n\n\t\t\t MENU\t\t\n");
    printf("\t\t\t******\n\n");
    printf("\t1.Add New\n   \t2.List\n   \t3.Exit\n  \n\t4.Modify\n \t5.Search\n\t6.Delete\n");

    switch (getch())
    {
    case '1':

        addrecord();
        break;
    case '2':
        listrecord();
        break;
    case '3':
        exit(0);
        break;
    case '4':
        modifyrecord();
        break;
    case '5':
        searchrecord();
        break;
    case '6':
        deleterecord();
        break;
    default:
        printf("\nEnter 1 to 6 only");
        printf("\n Enter any key");
        printf("\n");
        getch();

        menu();
    }
}
void addrecord()
{
    FILE *f;
    struct person p;
    f = fopen("project", "ab+");
    printf("\n Enter name: ");
    got(p.name);
    printf("\nEnter the address: ");
    got(p.address);
    printf("\nEnter father name: ");
    got(p.father_name);
    printf("\nEnter mother name: ");
    got(p.mother_name);
    printf("\nEnter phone no.:");
    scanf("%ld", &p.mble_no);
    printf("Enter gender:");
    got(p.gender);
    printf("\nEnter e-mail:");
    got(p.mail);
    printf("\nEnter citizen no:");
    got(p.citision_no);
    fwrite(&p, sizeof(p), 1, f);

    fflush(stdin);
    printf("\nSAVED SUCCESSFULLY");

    fclose(f);

    printf("\n\nEnter any key");

    getch();
    menu();
}
void listrecord()
{
    struct person p;
    FILE *f;
    f = fopen("project", "rb");
    if (f == NULL)
    {
        printf("\nNOT FOUND");

        exit(1);
    }
    while (fread(&p, sizeof(p), 1, f) == 1)
    {
        printf("\n\n\n YOUR RECORD IS\n\n ");
        printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobile no=%ld\ngender=%s\nE-mail=%s\nCitizen no=%s", p.name, p.address, p.father_name, p.mother_name, p.mble_no, p.gender, p.mail, p.citision_no);

        getch();
    }
    fclose(f);
    printf("\n Enter any key");
    getch();
    menu();
}
void searchrecord()
{
    struct person p;
    FILE *f;
    char name[100];

    f = fopen("project", "rb");
    if (f == NULL)
    {
        printf("\n NOT IN LIST\a\a\a\a");
        exit(1);
    }
    printf("\nEnter name of person to search\n");
    got(name);
    while (fread(&p, sizeof(p), 1, f) == 1)
    {
        if (strcmp(p.name, name) == 0)
        {
            printf("\n\tDetail Information About %s", name);
            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\ngender:%s\nE-mail:%s\nCitision no:%s", p.name, p.address, p.father_name, p.mother_name, p.mble_no, p.gender, p.mail, p.citision_no);
        }
        else
            printf("NOT FOUND");
    }
    fclose(f);
    printf("\n Enter any key");

    getch();
    menu();
}
void deleterecord()
{
    struct person p;
    FILE *f, *ft;
    int flag;
    char name[100];
    f = fopen("project", "rb");
    if (f == NULL)
    {

        printf("DATA NOT ADDED YET.");
    }
    else
    {
        ft = fopen("temp", "wb+");
        if (ft == NULL)

            printf("ERROR");
        else

        {

            printf("Enter CONTACT'S NAME:");
            got(name);

            fflush(stdin);
            while (fread(&p, sizeof(p), 1, f) == 1)
            {
                if (strcmp(p.name, name) != 0)
                    fwrite(&p, sizeof(p), 1, ft);
                if (strcmp(p.name, name) == 0)
                    flag = 1;
            }
            fclose(f);
            fclose(ft);
            if (flag != 1)
            {
                printf("NO CONACT'S RECORD TO DELETE.");
                remove("temp.txt");
            }
            else
            {
                remove("project");
                rename("temp.txt", "project");
                printf("RECORD DELETED SUCCESSFULLY.");
            }
        }
    }
    printf("\n Enter any key");

    getch();
    menu();
}

void modifyrecord()
{
    int c;
    FILE *f;
    int flag = 0;
    struct person p, s;
    char name[50];
    f = fopen("project", "rb+");
    if (f == NULL)
    {

        printf("CONTACT'S DATA NOT ADDED YET.");
        exit(1);
    }
    else
    {

        printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
        got(name);
        while (fread(&p, sizeof(p), 1, f) == 1)
        {
            if (strcmp(name, p.name) == 0)
            {

                printf("\n Enter name:");
                got(s.name);
                printf("\nEnter the address:");
                got(s.address);
                printf("\nEnter father name:");
                got(s.father_name);
                printf("\nEnter mother name:");
                got(s.mother_name);
                printf("\nEnter phone no:");
                scanf("%ld", &s.mble_no);
                printf("\nEnter gender:");
                got(s.gender);
                printf("\nEnter e-mail:");
                got(s.mail);
                printf("\nEnter citizen no\n");
                got(s.citision_no);
                fseek(f, -sizeof(p), SEEK_CUR);
                fwrite(&s, sizeof(p), 1, f);
                flag = 1;
                break;
            }
            fflush(stdin);
        }
        if (flag == 1)
        {
            printf("\n your data id modified");
        }
        else
        {
            printf(" \n data is not found");
        }
        fclose(f);
    }
    printf("\n Enter any key");
    getch();
    menu();
}
void got(char *name)
{

    int i = 0, j;
    char c, ch;
    do
    {
        c = getch();
        if (c != 8 && c != 13)
        {
            *(name + i) = c;
            putch(c);
            i++;
        }
        if (c == 8)
        {
            if (i > 0)
            {
                i--;
            }
    
            for (j = 0; j < i; j++)
            {
                ch = *(name + j);
                putch(ch);
            }
        }
    } while (c != 13);
    *(name + i) = '\0';
}

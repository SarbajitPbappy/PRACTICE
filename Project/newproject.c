#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<dos.h>
struct bill
{
    char item[50];
    float price;
    float quantity;
};
struct order
{
    char name[50];
    char date[50];
    int numOfitems;
    struct bill itms[100];
};
FILE *fp;
char saveBill = 'y';
float total;
struct order ord;
struct order orders;
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void password(void)
{
    char passwrd[]="Bappypaul2001@";
    gotoxy(22,2);
    int j,z;
    char n[]="Authorized Person Only";
    z=strlen(n);
    for(j=0;j<=16;j++)
    {
        Sleep(40);
        printf("\xDB");
    }
    for(j = 0; j<=z; j++)
    {
        Sleep(40);
        printf(" %c",n[j]);
    }
    for(j=0;j<=16; j++)
    {
        Sleep(40);
        printf("\xDB");
    }
    gotoxy(30,4);
    printf("Enter Password For Billing : \t\t");
    char ch,pass[32];
    char w='*';
    int i=0;
    while(ch!=13)
    {
        ch=getch();
        if(ch!=13 && ch!=8)
        {
            printf("%c",w);
            pass[i++]=ch;
        }
    }
    pass[i]='\0';
    if(strcmp(pass,passwrd)==0)
    {
        gotoxy(30,6);
        printf("Entering");
        for (j = 0; j <= 16; j++)
        {
            Sleep(40);
            printf("\xDB");
        }
        Sleep(5);
    }
    else 
    {
        gotoxy(30,6);
        printf("ACCESS DENIED_");
        Sleep(500);
        system("cls");
        password();
    }
}
void menu()
{
    system("cls");
    gotoxy(30, 1);
    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    gotoxy(30, 2);
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FOOD MANIA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(30, 3);
    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    gotoxy(30, 4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Generate Bill");
    gotoxy(30, 7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Show All Bill");
    gotoxy(30, 10);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Search Bill");
    gotoxy(30, 13);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4.Exit");
    gotoxy(30, 16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Enter Your Chocie ->>\t");
    int choice;
    scanf("%d", &choice);
    fgetc(stdin);
    system("cls");
    switch (choice)
    {
    case 1:
        bill_info();
        break;
    case 2:
        show_saved();
        break;
    case 3:
        search_bill();
        break;
    case 4:
        exit(0);
    default:
        printf("Unknown");
    }
}
void Generate_Bill_Header(char name[50],char date[20])
{
    system("cls");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Your Bill Info \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB3\n\n\n");
    printf("\t\t\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Name of the Consumer : %s\n", name);
    printf("\t\t\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Billing Date : %s\n", date);
    printf("\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\tItems : \t\t");
    printf("Quantity : \t\t");
    printf("Total : \t\t\n");
    printf("\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
}
void bill_body(char item[50], float qty,float price)
{
    printf("\t\t%s\t\t\t",item);
    printf("%.2f\t\t\t",qty);
    printf("%.2f\t\t\t",(price*qty)*1.0);
    printf("\n");
}
void bill_footer(float total)
{
    float discount = .1*total;
    float netTotal = total-discount;
    float vat = .09*netTotal;
    float grandTotal = netTotal+vat;
    printf("\n\n");
    printf("\t\t--------------------------------------------------------\n");
    printf("\t\tSub_Total\t\t\t\t\t%.2f",total);
    printf("\n\t\tDiscount @10%%\t\t\t\t\t%.2f",discount);
    printf("\n\t\tNet_Total\t\t\t\t\t%.2f", netTotal);
    printf("\n\t\tVAT@9%%\t\t\t\t\t\t%.2f",vat);
    printf("\n\t\tGrand_Total\t\t\t\t\t%.2f", grandTotal);
    printf("\n\t\t--------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t@FOODMANIA");
}
void bill_info()
{
    int n;
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Enter Consumer Name : ");
    fgets(ord.name, 50, stdin);
    ord.name[strlen(ord.name) - 1] = 0;
    strcpy(ord.date, __DATE__);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Enter The number of items : ");
    scanf("%d", &n);
    ord.numOfitems = n;
    system("cls");
    for (int i = 0; i < n; i++)
    {
        system("cls");
        fgetc(stdin);
        printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Enter The Item %d: \t\t", i + 1);
        fgets(ord.itms[i].item, 100, stdin);
        ord.itms[i].item[strlen(ord.itms[i].item) - 1] = 0;
        printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Enter The Quantity :\t\t");
        scanf("%f", &ord.itms[i].quantity);
        printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Enter The Price : \t\t");
        scanf("%f", &ord.itms[i].price);
        total += ord.itms[i].quantity * ord.itms[i].price;
    }
    Generate_Bill_Header(ord.name, ord.date);
    for (int i = 0; i < ord.numOfitems; i++)
    {
        bill_body(ord.itms[i].item, ord.itms[i].quantity, ord.itms[i].price);
    }
    bill_footer(total);
    printf("\n\nDo You want to Save The Bill-->");
    scanf("%s",&saveBill);
    if(saveBill=='y')
    {
        fp=fopen("Bill.dat","a++");
        fwrite(&ord, sizeof(struct order),1,fp);
        if(fwrite!=0)
        {
            printf("\nSuccess!");
        }
        else 
        {
            printf("\nError!");
        }
        fclose(fp);
    }
}
void show_saved()
{
    system("cls");
    printf("\n *****Previous Bill Information*****\n");
    fp=fopen("bill.dat", "r");
    while(fread(&orders,sizeof(struct order),1,fp))
    {
        float tot=0;
        Generate_Bill_Header(orders.name,orders.date);
        for(int i=0;i<orders.numOfitems;i++)
        {
            bill_body(orders.itms[i].item,orders.itms[i].quantity,orders.itms[i].price);
            tot+=orders.itms[i].quantity*orders.itms[i].price;
        }
        bill_footer(tot);
    }
    fclose(fp);
}
void search_bill()
{
    int billFound=0;
    char consumer[50];
    printf("Enter the name Of The Consumers to search-->");
    fgetc(stdin);
    fgets(consumer, 50,stdin);
    consumer[strlen(consumer)-1] = 0;
    system("cls");
    printf("\n *****Previous Bill Information*****\n");
    fp = fopen("bill.dat", "r");
    while (fread(&orders, sizeof(struct order), 1, fp))
    {
        float tot = 0;
        if(strcmp(orders.name,consumer))
        {
            Generate_Bill_Header(orders.name, orders.date);
            for (int i = 0; i < orders.numOfitems; i++)
            {
                bill_body(orders.itms[i].item, orders.itms[i].quantity, orders.itms[i].price);
                tot += orders.itms[i].quantity * orders.itms[i].price;
            }
            bill_footer(tot);
            billFound=1;
        }
    }
    if(!billFound)
    {
        printf("No bill found");
    }
    fclose(fp);
}
int main()
{
    system("color B");
    gotoxy(31, 7);
    password();
    menu();
}
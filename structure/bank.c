#include <stdio.h>
#include <string.h>
struct customer
{
    char name[20];
    int account_number;
    double balance;
};

struct customer customers[50];

void store_customer_info(struct customer customers[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Enter name: ");
        gets(customers[i].name);
        fflush(stdin);
        printf("Enter account number: ");
        scanf("%d", &customers[i].account_number);
        fflush(stdin);
        printf("Enter balance: ");
        scanf("%lf", &customers[i].balance);
        fflush(stdin);
    }
}

void print_customers_with_balance_less_than_200(struct customer customers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (customers[i].balance < 200)
        {
            printf("Name: %s\n", customers[i].name);
        }
    }
}

void add_100_to_balance_more_than_1000(struct customer customers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (customers[i].balance > 1000)
        {
            customers[i].balance += 100;
            printf("Balance of %s is %lf\n", customers[i].name, customers[i].balance);
        }
    }
}

int main()
{
    store_customer_info(customers, 5);
    print_customers_with_balance_less_than_200(customers, 5);
    add_100_to_balance_more_than_1000(customers, 5);
    return 0;
}
#include <stdio.h>

int main()
{
    int accNo;
    char name[50];
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("\nEnter Deposit Amount: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
    {
        balance -= withdraw;
        printf("Withdrawal Successful.\n");
    }
    else
    {
        printf("Insufficient Balance.\n");
    }

    printf("\n------ Account Details ------\n");
    printf("Account No : %d\n", accNo);
    printf("Customer : %s\n", name);
    printf("Available Balance : %.2f\n", balance);

    return 0;
}





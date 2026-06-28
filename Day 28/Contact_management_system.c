#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[50];
    int n, i;

    printf("Enter Number of Contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);

        printf("Enter Email: ");
        scanf("%s", c[i].email);
    }

    printf("\n------ Contact List ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName : %s", c[i].name);
        printf("\nPhone : %s", c[i].phone);
        printf("\nEmail : %s\n", c[i].email);
    }

    return 0;
}






#include <stdio.h>

int main()
{
    int n, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (original == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}






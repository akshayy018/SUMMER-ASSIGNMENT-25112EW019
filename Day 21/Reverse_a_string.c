#include <stdio.h>

int main() {
    char str[100], temp;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for(int i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed String: %s\n", str);

    return 0;
}



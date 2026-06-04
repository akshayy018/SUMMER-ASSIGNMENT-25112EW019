#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, digit, count, sum;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers are:\n");

    for(num = start; num <= end; num++) {
        temp = num;
        count = 0;
        sum = 0;

        while(temp != 0) {
            count++;
            temp /= 10;
        }

        temp = num;

        while(temp != 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}




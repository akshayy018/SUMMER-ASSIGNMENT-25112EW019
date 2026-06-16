#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    int found = 0;

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("No pair found.\n");
    }

    return 0;
}



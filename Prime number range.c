#include <stdio.h>

int main()
{
    int start, end, i, j, flag;

    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++)
    {
        if (i <= 1)
            continue;

        flag = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("%d ", i);
    }

    return 0;
}







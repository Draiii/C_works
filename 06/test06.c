

#include <stdio.h>
#define SIZE 5

int main(int argc, char *argv[])
{

    int repeat, temp, i, a[SIZE] = {12, 51, 27, 32, 45};

    printf("������ �迭 \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", a[i]);
    }
printf("\n\n");
    for (repeat = 1; repeat < SIZE; repeat++)
    {
        for (i = 0; i < SIZE - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        for (i = 0; i < SIZE; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }

    printf("\n\n������ �迭 \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

int main()
{

    int repeat, x, y, sw, num;
    repeat = SIZE;
    x = 0, y = -1, sw = 1, num = 0;
    int alist[SIZE][SIZE];

    /* code */

    while (1)
    {
        for (int r = 0; r < repeat; r++)
        {
            num = num + 1;
            y = y + sw;
            alist[x][y] = num;
        }

        /* �ݺ�Ƚ�� ���� */
        repeat = repeat - 1;
        /* �ݺ�Ƚ����0�̸� ���� */
        if (repeat <= 0)
            break;

        for (int t = 0; t < repeat; t++)
        {
            num = num + 1;
            x = x + sw;
            alist[x][y] = num;
        }

        /* �ε��� ���� ��ȯ */
        sw *= -1;
    }

    for (x = 0; x < SIZE; x++)
    {
        for (y = 0; y < SIZE; y++)
        {
            printf("%d\t", alist[x][y]);
        }
        printf("\n\n");
    }

    return 0;
}
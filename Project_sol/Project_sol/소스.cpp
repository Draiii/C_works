#include <stdio.h>


int main(void)
{

    int size, repeat, x, y, sw, num;
    size = 5;
    repeat = 5;
    x = 0, y = -1, sw = 1, num = 0;
    int alist[5][5] = { 0 };

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

    for (x = 0; x < repeat; x++)
    {
        for (y = 0; y < repeat; y++)
        {
            printf("%d\t", alist[x][y]);
        }
        printf("\n\n");
    }


    return 0;
}
#include <stdio.h>

int main(void)
{

    unsigned int inNum = 0;

    while (1)
    {
        printf("�����Է� �� ��ŭ �� ��� (1~100)\n");
        printf("1~100���̰��� �Է��ϼ���:");
        scanf("%d", &inNum);

        if (inNum < 0 || inNum > 100)
        {
            printf("�Է��� �� : %02d, �߸��Է��ϼ̽��ϴ�. �ٽ��Է��ϼ���.\n",  inNum);
            continue;
        }
        else
        {
            for (int i = 1; i <= inNum; i++)
            {
                printf("*(%02d)", i);
                if (i % 10 == 0)
                    printf("\n");
            }
            break;
        }
    }

    return 0;
}
#include <stdio.h>
#define HOURS 3600

int main(void)
{

    // �Է��Ѱ� �ð����� ȯ��
    int num = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    int i = 0;
    while (1)
    {
        printf("\n�ð�����(%d)\n", i);
        printf("1000�̻� ����(��)�� �Է��ϼ���.\n");
        scanf("%d", &num);
        printf("�Է��� ���� %d�Դϴ�.\n", num);

        if (num < 1000 || sizeof(scanf("%d", &num)) != 4)
        {
            printf("���� �߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n");
            i++;
            fflush(stdin);
        }

        else
        {
            hours = (num / HOURS);
            minutes = (num % HOURS) / 60;
            seconds = (num % 60);
            printf("\n�ð�����(%d)\n", i);
            printf("�Է��� %02d�� �ð��� %02d�� %02d�� %02d�� �Դϴ�.\n", num, hours, minutes, seconds);
            break;
        }
    }
    return 0;
}
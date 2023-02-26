#include <stdio.h>
#include <string.h>

#define HOURS 3600

int main(void)
{

    printf("C��� �׽�Ʈ ����.\n");
    printf("%5d\n");
    printf("%f\n", 120.45F); // float �Ҽ��� 6��¥ �ڸ������� ��� ���ϴ� ��ȿ�� X
    printf("%f\n", 120.45);  // double

    // 120.449997
    // 120.450000
    char name[64] = {""};

    float nNum[2] = {};
    float nResult = 0;
    printf("2���� ������ �Է��ϼ���");
    scanf("%f %f", &nNum[0], &nNum[1]);

    nResult = (nNum[0] / 2) + (nNum[1] / 2);

    printf("�� ������ ��հ��� %.2f �Դϴ�.\n", nResult);

    // �Է��Ѱ� �ð����� ȯ��
    int num = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    while (1)
    {
        printf("1000�̻� ����(��)�� �Է��ϼ���.\n");
        scanf("%d", &num);
        printf("�Է��� ���� %d�Դϴ�.\n", num);

        if (num < 1000 || sizeof(scanf("%d", &num)) != 4 )
        {
            printf("���� �߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n");
            fflush(stdin);
        }

        else
        {
            hours = (num / HOURS);
            minutes = (num % HOURS) / 60;
            seconds = num / 60 / 60;
            printf("�Է��� %02d�� �ð��� %02d�� %02d�� %02d�� �Դϴ�.\n", num, hours, minutes, seconds);
            break;
        }
    }

    return 0;
}
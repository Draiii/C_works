#include <stdio.h>
#define HOURS 3600

int main(void)
{

    // 입력한값 시간으로 환산
    int num = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    int i = 0;
    while (1)
    {
        printf("\n시간계산기(%d)\n", i);
        printf("1000이상 정수(초)를 입력하세요.\n");
        scanf("%d", &num);
        printf("입력한 값은 %d입니다.\n", num);

        if (num < 1000 || sizeof(scanf("%d", &num)) != 4)
        {
            printf("값을 잘못 입력했습니다. 다시 입력하세요.\n");
            i++;
            fflush(stdin);
        }

        else
        {
            hours = (num / HOURS);
            minutes = (num % HOURS) / 60;
            seconds = (num % 60);
            printf("\n시간계산기(%d)\n", i);
            printf("입력한 %02d의 시간은 %02d시 %02d분 %02d초 입니다.\n", num, hours, minutes, seconds);
            break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

#define HOURS 3600

int main(void)
{

    printf("C언어 테스트 시작.\n");
    printf("%5d\n");
    printf("%f\n", 120.45F); // float 소숫점 6번짜 자리까지만 출력 이하는 유효값 X
    printf("%f\n", 120.45);  // double

    // 120.449997
    // 120.450000
    char name[64] = {""};

    float nNum[2] = {};
    float nResult = 0;
    printf("2개의 변수를 입력하세요");
    scanf("%f %f", &nNum[0], &nNum[1]);

    nResult = (nNum[0] / 2) + (nNum[1] / 2);

    printf("두 변수의 평균값은 %.2f 입니다.\n", nResult);

    // 입력한값 시간으로 환산
    int num = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    while (1)
    {
        printf("1000이상 정수(초)를 입력하세요.\n");
        scanf("%d", &num);
        printf("입력한 값은 %d입니다.\n", num);

        if (num < 1000 || sizeof(scanf("%d", &num)) != 4 )
        {
            printf("값을 잘못 입력했습니다. 다시 입력하세요.\n");
            fflush(stdin);
        }

        else
        {
            hours = (num / HOURS);
            minutes = (num % HOURS) / 60;
            seconds = num / 60 / 60;
            printf("입력한 %02d의 시간은 %02d시 %02d분 %02d초 입니다.\n", num, hours, minutes, seconds);
            break;
        }
    }

    return 0;
}
#include <stdio.h>

int main(void)
{

    unsigned int inNum = 0;

    while (1)
    {
        printf("숫자입력 한 만큼 별 찍기 (1~100)\n");
        printf("1~100사이값을 입력하세요:");
        scanf("%d", &inNum);

        if (inNum < 0 || inNum > 100)
        {
            printf("입력한 값 : %02d, 잘못입력하셨습니다. 다시입력하세요.\n",  inNum);
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
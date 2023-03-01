#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    printf("값을 입력하세요\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
        b = b * i;
        //55
        //1 = 1 * 1
        //1 = 1 * 2
        //2 = 2 * 3
        //6 = 6 * 4
        //24 = 24 * 5
        //result = 120
    printf("\n%d", b);
    return 0;
}
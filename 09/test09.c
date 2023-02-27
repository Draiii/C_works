#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 배열
    int aList[5] = {40, 50, 30, 20, 70};
    // *paList 주소에 aList 주소를 입력
    // 메모리 주소를 저장한다 0x0023FFA0 등등
    int *paList = aList; // 배열의 이름은 0번 요소에 부여한 식별자
                         //*paList = &aList[0] 같은의미

    // paList 에 들어있는 메모리 주소의 자료형에 따라 1칸만큼 옆에있는 메모리주소에 5를 대입
    //  aList[1] = 5; 같은의미
    *(paList + 1) = 5;
    for (int i = 0; i < 5; i++)
    {
        // 출력하면 40, 5, 30, 20, 70이 나온다
        printf("%d\t", &aList[i]);
    }
    printf("\n%d\t %d", &aList[2], paList);

    // 포인터는 메모리 주소를 변수화해서 저장
    // *paList = aList    ==    aList 배열의 메모리 주소를 포인터변수 *Palist에 저장
    // 변수 앞에 &val == 변수의 메모리 주소를 가리킴
    // 변수 앞에 *val (선언이 아닐 떄) 간접지정자
    //  피연산자는 포인터 형식이어야 합니다. 연산 결과는 피연산자가 가리키는 주소에 있는 값입니다


    // 12바이트 (인트형 * 3) 메모리를 동적할당하고 그 메모리 시작주소를 nData에 저장
    int *nData = (int *)malloc(sizeof(int) * 3);
    
    // 동적할당 받은 메모리를 반환(해제)한다.
    free(nData);
    return 0;
}
#include <stdio.h>

int main()
{
    int i = 0, j = 1; // 반복문 구현을 위한 변수
    int sum = 0, temp = 0; // 누적합계 및 임시합계 변수
    int plus_num = 2; // 증가되는 수 (2,3,4....)

    for (i = 1; i <= 15; i++)
    {
        printf("%d", j); // 시작점 1 출력
        temp += j; // 임시 합계에 시작점 누적
        sum += temp; // 누적 합계에 시작점 누적

        for (j = 1; j <= i; j++)
        {
            if (j >= i)
                break;
            else
            {
                temp += plus_num; // 임시합계에 증가수를 더함으로 다음 더해질 수 저장
                printf(" + %d", temp); // 다음 수 출력
                plus_num++; // 증가되는 수 +1
                sum += temp; // 누적합계에 다음수 누적
            }
           
           
        }
        printf(" = %d \n", sum);  // 누적합계 출력
        j = 1;
        sum = 0;
        temp = 0;
        plus_num = 2; // 다음 반복을 위해 각종 변수 초기화
    }

    return 0;
}
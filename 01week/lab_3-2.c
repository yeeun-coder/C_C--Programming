#pragma warning(disable:4996)  // scanf 보안 경고 무시
#include <stdio.h>

int main() 
{
    int powerConsumed, costPerkW;  // 정수형 변수 선언

    printf("사용한 전력량(kW)을 입력하세요:  ");
    scanf("%d", &powerConsumed); 
    printf("전력 요금(1kW당 비용)을 입력하세요: ");
    scanf("%d", &costPerkW);

    // 오버플로를 방지하기 위한 명시적 형 변환
    long long totalCost = (long long)powerConsumed * costPerkW;

    // long long 자료형에 대한 형식 지정자 %lld
    printf("전기 요금: %lld\n", totalCost);

    return 0;
}

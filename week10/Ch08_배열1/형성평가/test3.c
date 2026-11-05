// 10개의 정수를 입력받아 홀수 번째 입력받은 정수의 합과 짝수 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[10];
    int oddSum = 0;
    int evenSum = 0;

    for (int i=0; i<10; i++) {
        scanf("%d", &num[i]);
        if (i % 2 == 0) {
            oddSum += num[i];
        } else {
            evenSum += num[i];
        }
    }
    printf("odd : %d\n", oddSum);
    printf("even : %d\n", evenSum);
}


// 결과
// 입력 : 10 20 25 66 83 7 22 90 1 10
// 출력
// odd : 141
// even : 193
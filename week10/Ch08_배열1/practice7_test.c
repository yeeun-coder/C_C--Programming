// 10개의 정수를 입력받아 배열에 저장한 후 짝수 번째 입력된 값의 합과 홀수 번째 입력된 값의 평균을 출력하는 프로그램을 작성하시오.
// 평균은 반올림하여 소수 첫째 자리까지 출력한다.
#include <stdio.h>

int main() {
    int num[10];
    int evenSum = 0;
    int oddSum = 0;
    int cnt = 0;

    for (int i=0; i<10; i++) {
        scanf("%d", &num[i]);
        if (i % 2 == 0) {
            oddSum += num[i];
            cnt++;
        } else {
            evenSum += num[i];
        }
    }

    float avg = (float)oddSum / cnt;
    printf("sum : %d\n", evenSum);
    printf("avg : %.1f\n", avg);
}


// 결과
// 입력 : 95 100 88 65 76 89 58 93 77 99
// 출력
// sum : 446
// avg : 78.8
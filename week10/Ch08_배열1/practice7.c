// 10명의 컴퓨터 점수를 입력받아 배열에 저장하고 총점과 평균을 구하여 출력하는 프로그램을 작성하시오.
// (평균은 반올림하여 소수 첫째자리까지 출력한다.)
#include <stdio.h>

int main() {
    int num[10];
    int sum = 0;
    int cnt = 0;

    for (int i=0; i<10; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
        cnt++;
    }

    float avg = (float)sum / cnt;
    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", avg);
}


// 결과
// 입력 : 95 100 88 65 76 89 58 93 77 99
// 출력
// sum = 840
// avg = 84.0
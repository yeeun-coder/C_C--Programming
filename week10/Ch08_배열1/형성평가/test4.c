// 6명의 몸무게를 입력받아 평균을 출력하는 프로그램을 작성하시오.
// 출력은 반올림하여 소수 첫째자리까지로 한다.
#include <stdio.h>

int main() {
    float num[6];
    float sum = 0;
    float cnt = 0;

    for (int i=0; i<6; i++) {
        scanf("%f", &num[i]);
        sum += num[i];
        cnt++;
    }

    float avg = sum / cnt;
    printf("%.1f\n", avg);
}


// 결과
// 입력 : 23.2 39.6 66.4 50.0 45.6 48.0
// 출력 : 45.5
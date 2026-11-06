// 5명 학생의 4과목 점수를 입력 받아 각 학생의 총점과 평균을 출력하는 프로그램을 작성하시오.
// (평균은 반올림하여 소수 첫째자리까지 출력한다.)
#include <stdio.h>

int main() {
    int grade[4][5] = {};
    int sum;
    int cnt;
    float avg;

    for (int i=0; i<5; i++) {
        for (int j=0; j<4; j++) {
            scanf("%d", &grade[i][j]);
        }
    }

    for (int i=0; i<5; i++) {
        sum = 0;
        cnt = 0;
        avg = 0;

        for (int j=0; j<4; j++) {
            sum += grade[i][j];
            cnt++;
        }
        avg = (float)sum / cnt;
        printf("%d %.1f\n", sum, avg);
    }

    return 0;
}


// 결과
// 입력 
// 85 67 95 65 
// 80 95 86 56
// 100 98 67 86
// 95 76 84 65
// 67 86 90 76

// 출력
// 312 78.0
// 317 79.3
// 351 87.8
// 320 80.0
// 319 79.8
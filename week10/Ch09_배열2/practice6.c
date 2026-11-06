// 학생 3명의 국어, 영어, 수학 세 과목의 점수를 입력받아 
// 학생별 총점과 과목별 합계를 아래와 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int grade[3][3] = {};
    int sum;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            scanf("%d", &grade[i][j]);
        }
    }

    for (int i=0; i<3; i++) {
        sum = 0;

        for (int j=0; j<3; j++) {
            printf("%d ", grade[i][j]);
            sum += grade[i][j];
        }
        printf("%d\n", sum);
    }

    for (int j=0; j<3; j++) {
        sum = 0;

        for (int i=0; i<3; i++) {
            sum += grade[i][j];
        }

        printf("%d ", sum);
    }

    sum = 0;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            sum += grade[i][j];
        }
    }
    printf("%d\n", sum);

    return 0;
}


// 결과 
// 입력 
// 95 100 88
// 85 60 93
// 66 99 88

// 출력 
// 95 100 88 283
// 85 60 93 238
// 66 99 88 253
// 246 259 269 774
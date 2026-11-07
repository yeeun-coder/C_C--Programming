// 4행 2열의 배열을 입력받아 첫 번째 줄에는 가로 평균, 두 번째 줄에는 세로 평균 
// 그리고 세 번째 줄에는 전체평균을 출력하는 프로그램을 작성하시오. (소수점 이하는 버림한다.)
#include <stdio.h>

int main() {
    int num[4][2];
    int sum;
    int avg;

    for (int i=0; i<4; i++) {
        for (int j=0; j<2; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    for (int i=0; i<4; i++) {
        sum = 0;
        for (int j=0; j<2; j++) {
            sum += num[i][j];
        }
        avg = sum / 2;
        printf("%d ", avg);
    }
    printf("\n");
    
    for (int j=0; j<2; j++) {
        sum = 0;
        for (int i=0; i<4; i++) {
            sum += num[i][j];
        }
        avg = sum / 4;
        printf("%d ", avg);
    }
    printf("\n");

    sum = 0;
    for (int i=0; i<4; i++) {
        for (int j=0; j<2; j++) {
            sum += num[i][j];
        }
    }
    avg = sum / 8;
    printf("%d\n", avg);

    return 0;
}



// 결과
// 입력 
// 16 27
// 39 100
// 19 88
// 61 20

// 출력 
// 21 69 53 40
// 33 58
// 46

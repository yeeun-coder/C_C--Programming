// 행의 크기를 입력받아 파스칼 삼각형을 작성하여 마지막 행부터 
// 첫 번째 행까지 차례로 출력하는 프로그램을 작성하시오. 
// 단, 행의 크기는 최대 10이다.
#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);
    int num2[num1][num1];

    for (int i=0; i<num1; i++) {
        for (int j=0; j<=i; j++) {
            if (j == 0 || j == i) {
                num2[i][j] = 1;
            } else {
                num2[i][j] = num2[i-1][j-1] + num2[i-1][j];
            }
        }
    }

    for (int i=num1-1; i>=0; i--) {
        for (int j=0; j<=i; j++) {
            printf("%d ", num2[i][j]);
        }
        printf("\n");
    }

    return 0;
}



// 결과
// 입력 : 6
// 출력 
// 1 5 10 10 5 1
// 1 4 6 4 1
// 1 3 3 1
// 1 2 1
// 1 1
// 1


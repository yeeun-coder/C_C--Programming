// 아래와 같은 파스칼 삼각형을 출력하는 프로그램을 작성하시오. 
// 파스칼 삼각형은 첫 번째 줄 첫 번째 행을 1로 초기화한 후 
// 다음 줄부터는 바로 위의 값과 바로 위 왼쪽의 값을 더한 값이 된다.
#include <stdio.h>

int main() {
    int num[5][5] = {};

    for (int i=0; i<5; i++) {
        for (int j=0; j<=i; j++) {
            if (j == 0 || j == i) {
                num[i][j] = 1;
            }
            else {
                num[i][j] = num[i-1][j-1] + num[i-1][j];
            }
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// 결과 
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
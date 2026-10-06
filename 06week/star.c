#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {  // 행
        for (int j = 0; j < 5; j++) {  // 열
            if (j <= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


// 실행 결과
// *
// **
// ***
// ****
// *****

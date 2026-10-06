#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {  // 행
        for (int j = 0; j < i; j++) {  // 열
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


// 실행 결과
// *****
// ****
// ***
// **
// *

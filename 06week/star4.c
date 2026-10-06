#include <stdio.h>

int main() {

    for (int i = 1; i <= 6; i++) {  // 행
        int star; 

        if (i <= 4) {
            star = i;  // 1, 2, 3
        } else {
            star = 7 - i;  // 2, 1
        }
        for (int j = 1; j <= star; j++) {  // 열
            printf("*");
        }
        printf("\n");
    }
}


// 실행 결과
// *
// **
// ***
// ****
// **
// *

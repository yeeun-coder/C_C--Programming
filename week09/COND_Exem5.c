#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 >= 4 && num2 >= 4) {
        printf("WIN.\n");
    } else if (num1 < 4 && num2 < 4) {
        printf("LOSE.\n");
    } else {
        printf("DRAW.\n");
    }
}


// 결과
// 1)
// 입력 : 4 5
// 출력 : WIN.

// 2)
// 입력 : 3 4
// 출력 : DRAW.

// 3)
// 입력 : 3 3
// 출력 : LOSE.

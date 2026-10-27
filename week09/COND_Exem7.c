#include <stdio.h>

int main() {
    int num1;
    printf("1. ADD\n2. EDIT\n3. DEL\n");
    scanf("%d", &num1);

    if (num1 == 1) {
        printf("You selected ADD.\n");
    } else if (num1 == 2) {
        printf("You selected EDIT.\n");
    } else if (num1 == 3) {
        printf("You selected DEL.\n");
    } else {
        printf("Wrong choice.\n");
    }
}


// 결과
// 1. ADD
// 2. EDIT
// 3. DEL
// 1)
// 입력 : 1
// 출력 : You selected ADD.

// 2)
// 입력 : 4
// 출력 : Wrong choice.

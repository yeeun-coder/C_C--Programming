#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    if (grade >= 80) {
        printf("Passed.\n");
    } else {
        printf("Failed.\n");
    }
}


// 결과
// 1)
// 입력 : 89
// 출력 : Passed.

// 2)
// 입력 : 60
// 출력 : Failed.

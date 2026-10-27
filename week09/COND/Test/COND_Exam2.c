#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);

    if (num1 == 0) {
        printf("zero\n");
    } else if (num1 > 0) {
        printf("plus\n");
    } else {
        printf("minus\n");
    }
}


// 결과
// 1)
// 실행 : 0
// 출력 : zero

// 2)
// 실행 : -1
// 출력 : minus

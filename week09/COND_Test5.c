#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > 0 && num2 > 0 && num3 > 0) {
        printf("All Positive\n");
    } else if (num1 == 0 || num2 == 0 || num3 == 0) {
        printf("Contain Zero\n");
    } else {
        printf("Mixed\n");
    }
}


// 결과
// 1)
// 입력 : 3 5 2 
// 출력 : All Positive

// 2)
// 입력 : 3 5 0
// 출력 : Contain Zero

// 3)
// 입력 : -1 1 2
// 출력 : Mixed

#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("max = %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("max = %d\n", num2);
    } else {
        printf("max = %d\n", num3);
    }
}


// 결과
// 1)
// 입력 : 1 5 4
// 출력 : max = 5

// 2)
// 입력 : 1 2 2
// 출력 : max = 2

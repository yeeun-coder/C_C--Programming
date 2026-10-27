#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 >= num2) {
        printf("%d\n", num1 - num2);
    } else {
        printf("%d\n", num2 - num1);
    }
}


// 결과
// 입력 : 50 85
// 출력 : 35

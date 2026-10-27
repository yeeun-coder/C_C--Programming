#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);

    if (num1 == 1) {
        printf("dog\n");
    } else if (num1 == 2) {
        printf("cat\n");
    } else if (num1 == 3) {
        printf("chick\n");
    } else {
        printf("blank\n");
    }
}


// 결과
// 입력 : 1
// 출력 : dog

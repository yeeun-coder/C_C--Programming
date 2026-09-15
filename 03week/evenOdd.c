// 짝수 홀수
#include <stdio.h>

int main(void) {
    int number;
    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    printf("%s", (number % 2 == 0) ? "Even.\n" : "Odd.\n");
    return 0;
}

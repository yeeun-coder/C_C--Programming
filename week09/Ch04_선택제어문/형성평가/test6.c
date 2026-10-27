#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);

    printf("%s", (num1 % 2 == 0) ? "Even\n" : "Odd\n");
}


// 결과
// 1)
// 입력 : 25
// 출력 : Odd

// 2)
// 입력 : -2
// 출력 : Even

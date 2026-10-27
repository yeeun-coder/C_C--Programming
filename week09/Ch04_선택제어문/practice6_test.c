#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);

    if (num1 < 0) {
        printf("Non positive\n");
    } else if (num1 % 2 == 0) {
        printf("Even Number\n");
    } else {
        printf("Odd Number\n");
    }
}


// 결과
// 1)
// 입력 : 20
// 출력 : Even Number

// 2)
// 입력 : 15
// 출력 : Odd Number

// 3)
// 입력 : -1
// 출력 : Non positive

#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        printf("leap year\n");
    } else {
        printf("common year\n");
    }
}


// 결과
// 1)
// 입력 : 2008
// 출력 : leap year

// 2)
// 입력 : 200
// 출력 : common year

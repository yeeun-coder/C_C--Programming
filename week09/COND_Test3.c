#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    if (age >= 20) {
        printf("adult\n");
    } else {
        printf("%d years later\n", 20 - age);
    }
}


// 결과
// 1)
// 입력 : 23
// 출력 : adult

// 2)
// 입력 : 17
// 출력 : 3 years later

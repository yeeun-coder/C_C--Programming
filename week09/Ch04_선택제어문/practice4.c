#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("A\n");
    } else if (grade >= 80) {
        printf("B\n");
    } else if (grade >= 70) {
        printf("C\n");
    } else if (grade >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
}


// 결과
// 1)
// 입력 : 95
// 출력 : A

// 2)
// 입력 : 79
// 출력 : C

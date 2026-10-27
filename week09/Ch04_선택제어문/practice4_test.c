#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("Excellent\n");
    } else if (grade >= 80) {
        printf("Good\n");
    } else if (grade >= 70) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
}


// 결과 
// 1)
// 입력 : 87
// 출력 : Good

// 2)
// 입력 : 69
// 출력 : Fail

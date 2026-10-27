#include <stdio.h>

int main() {
    float grade;
    scanf("%f", &grade);

    if (grade >= 4.0) {
        printf("scholarship\n");
    } else if (grade >= 3.0) {
        printf("next semester\n");
    } else if (grade >= 2.0) {
        printf("seasonal semester\n");
    } else {
        printf("retake\n");
    }
}


// 결과
// 입력 : 3.5
// 출력 : next semester

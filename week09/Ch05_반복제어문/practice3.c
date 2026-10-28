#include <stdio.h>

int main() {
    int grade;
    
    while (1) {
        scanf("%d", &grade);

        if (grade >= 0 && grade <= 100) {
            if (grade >= 80) {
                printf("Pass\n");
            } else {
                printf("Fail\n");
            }
        }  else {
            break;
        }
    }

    return 0;
}


// 결과
// 입력 -> 출력
// 50 -> Fail
// 95 -> Pass
// 101 -> 종료


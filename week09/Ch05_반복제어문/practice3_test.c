#include <stdio.h>

int main() {
    int num;
    
    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }  else if (num > 0) {
            printf("positive number\n");
        } else {
            printf("negative number\n");
        }
    }

    return 0;
}


// 결과
// 입력 -> 출력
// 10 -> positive number
// -10 -> negative number
// 0 -> 종료


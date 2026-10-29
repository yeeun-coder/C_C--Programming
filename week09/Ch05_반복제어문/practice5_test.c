#include <stdio.h>

int main() {
    int num;
    
    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break;
        } else if (num % 3 == 0) {
            printf("%d\n", num / 3);
        }
    }

    return 0;
}


// 결과
// 입력 -> 출력
// 12 -> 4
// 100 ->
// 21 -> 7
// -1 종료


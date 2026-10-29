#include <stdio.h>

int main() {
    int num;
    int odd = 0;
    int even = 0;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0) {
            break;
        } else if (num % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }
    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}


// 결과
// 입력 : 9 7 10 5 33 65 0
// 출력
// odd : 5
// even : 1

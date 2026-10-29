#include <stdio.h>

int main() {
    int num;
    int cnt = 0;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0) {
            break;
        } else if (num % 3 != 0 && num % 5 != 0) {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}


// 결과
// 입력 : 1 2 3 4 5 6 7 8 9 10 0
// 출력 : 5

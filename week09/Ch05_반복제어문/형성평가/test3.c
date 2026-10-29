#include <stdio.h>

int main() {
    int num;
    int cnt = 0;
    int sum = 0;
    float avg;

    while (1)
    {
        scanf("%d", &num);

        if (num < 0 || num > 100) {
            break;
        } 

        cnt++;
        sum += num;
        avg += num;
    }
    printf("sum : %d\n", sum);
    printf("avg : %1.1f\n", avg / cnt);

    return 0;
}


// 결과
// 입력 : 55 100 48 36 0 101
// 출력
// sum : 239
// avg : 47.8

#include <stdio.h>

int main() {
    int num;
    int cnt = 0;
    int sum = 0;
    double avg;
    
    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        } 

        cnt++;
        sum += num;
    }
     if (cnt > 0) {
        avg = (double)sum / cnt;

        printf("cnt = %d\n", cnt);
        printf("sum = %d\n", sum);
        printf("avg = %.2f\n", avg);
    }

    return 0;
}



// 결과
// 입력 : 15 88 97 0
// 출력
// cnt = 3
// sum = 200
// avg = 66.67

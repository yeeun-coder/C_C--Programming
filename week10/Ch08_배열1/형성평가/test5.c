// 정수 100개를 차례로 입력받다가 0이 입력되면 프로그램을 종료하고 
// 이전까지 입력된 정수 중 최대값과 최소값의 합을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[100];
    int cnt = 0;

    for (int i=0; i<100; i++) {
        scanf("%d", &num[i]);
        if (num[i] == 0) {
            break;
        }
        cnt++;
    }
    int max = num[0];
    int min = num[0];

    for (int i=0; i<cnt; i++) {
        if (num[i] > max) {
            max = num[i];
        } else if (num[i] < min) {
            min = num[i];
        }
    }

    printf("%d\n", max + min);
}


// 결과
// 입력 : 45 19 123 58 10 -55 16 -1 0
// 출력 : 68
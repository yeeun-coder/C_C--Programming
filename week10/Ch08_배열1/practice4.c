// 월을 입력받아 해당 월의 날 수를 출력하다가 월이 1~12의 범위를 벗어나면 종료하는 프로그램을 작성하시오.
// (년은 평년으로 하여 2월은 28일로 한다.)
#include <stdio.h>

int main() {
    int num[100];
    int cnt = 0;

    for (int i=0; i<100; i++) {
        scanf("%d", &num[i]);
        if (num[i] < 1 || num[i] > 12) {
            break;
        }
        cnt++;
    }

    for (int i=0; i<cnt; i++) {
        if  (num[i] == 2) {
            printf("28\n");
        }
        else if (num[i] == 4 || num[i] == 6 || num[i] == 9 || num[i] == 11) {
            printf("30\n");
        }
        else {
            printf("31\n");
        }
    }
    printf("\n");
}


// 결과
// 입력 -> 결과 
// 2 -> 28
// 12 -> 31
// 8 -> 31
// 0 -> 종료
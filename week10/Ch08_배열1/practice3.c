// 최대 100개까지의 정수를 차례로 입력받다가 0이 입력되면 입력을 중단하고 
// 짝수 번째에 입력된 정수를 모두 출력하는 프로그램을 작성하시오.
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

    for (int i=0; i<cnt; i++) {
        if  (i % 2 == 1) {
            printf("%d ", num[i]);
        }
    }
    printf("\n");
}


// 결과
// 입력 : 11 25 3 9 15 6 8 7 12 0
// 출력 : 25 9 6 7
// 100개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례로 입력받다가 0이 입력되면 0을 제외하고 
// 그 때까지 입력된 정수를 가장 나중에 입력된 정수부터 차례 대로 출력하는 프로그램을 작성하시오.
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

    for (int i=cnt-1; i>=0; i--) {
        printf("%d ", num[i]);
    }
    printf("\n");
}


// 결과
// 입력 : 3 5 10 55 0
// 출력 : 55 10 5 3
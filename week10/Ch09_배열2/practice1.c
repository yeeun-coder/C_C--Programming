// 1부터 10까지의 정수를 입력받다가 입력된 정수가 범위를 벗어나면 
// 그 때까지 한 번 이상 입력된 각 숫자의 개수를 작은 수부터 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[100];
    int count[11] = {0};
    int cnt = 0;

    for (int i=0; i<100; i++) {
        scanf("%d", &num[i]);
        if (num[i] < 1 || num[i] > 10) {
            break;
        }
        count[num[i]]++;
        cnt++;
    }

    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }
    printf("\n");
}


// 결과
// 입력 : 5 6 10 9 3 5 3 5 0
// 출력 
// 3 : 2
// 5 : 3
// 6 : 1
// 9 : 1
// 10 : 1

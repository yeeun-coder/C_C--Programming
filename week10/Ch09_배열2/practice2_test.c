// 100 미만의 양의 정수를 입력받다가 0이 입력되면 마지막에 입력된 0을 제외하고 
// 그 때까지 입력된 정수의 십의 자리 숫자가 각각 몇 개인지 작은 수부터 출력하는 프로그램을 작성하시오.
// (0개인 숫자는 출력하지 않는다.)
#include <stdio.h>

int main() {
    int num[100];
    int count[100] = {0};

    for (int i=0; i<100; i++) {
        scanf("%d", &num[i]);
        if (num[i] == 0) {
            break;
        }
        count[num[i] / 10]++;
    }

    for (int i=0; i<10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }
    printf("\n");
}


// 결과
// 입력 : 10 55 3 63 85 61 85 0
// 출력 
// 0 : 1
// 1 : 1
// 5 : 1
// 6 : 2
// 8 : 2
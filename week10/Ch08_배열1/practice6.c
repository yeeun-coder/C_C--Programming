// 입력되는 정수의 범위가 주어지지 않았을 때, 10개의 정수를 입력받아 배열에 저장하고 
// 그 중 최대값과 최소값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[10];

    for (int i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    int max = num[0];
    int min = num[0];

    for (int i=1; i<10; i++)
    {
        if (num[i] > max) {
            max = num[i];
        } else if (num[i] < min) {
            min = num[i];
        }
    }
    printf("%d %d\n", max, min);
}


// 결과
// 입력 : -5 10 -8 55 6 -31 12 -24 61 2
// 출력 : 61 -31
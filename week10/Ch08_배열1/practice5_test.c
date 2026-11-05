// 10개의 정수를 입력받아 배열에 저장하고 그 중 가장 작은 수를 출력하는 프로그램을 작성하시오.
// (입력으로 주어지는 정수는 1000을 넘지 않는다.)
#include <stdio.h>

int main() {
    int num[10];

    for (int i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    int min = num[0];

    for (int i=1; i<10; i++)
    {
        if (num[i] < min) {
            min = num[i];
        }
    }
    printf("%d\n", min);
}


// 결과
// 입력 : 5 10 8 55 6 31 12 24 61 2
// 출력 : 2
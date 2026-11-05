// 5개의 정수를 입력받은 후 첫 번째, 세 번째, 다섯 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[5];
    int sum = 0;

    for (int i=0; i<5; i++) {
        scanf("%d", &num[i]);
        if (i % 2 == 0) {
            sum += num[i];
        }
    }
    printf("%d\n", sum);
}


// 결과
// 입력 : 15 20 33 10 9
// 출력 : 57
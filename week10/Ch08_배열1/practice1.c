// 5개의 정수를 입력받은 후 차례로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[5];

    for (int i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}


// 결과
// 입력 : 5 10 9 3 2
// 출력 : 5 10 9 3 2

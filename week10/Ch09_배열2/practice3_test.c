// 5개의 정수를 {95, 75, 85, 100, 50}로 초기화하고 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[100];
    num[0] = 100;

    scanf("%d", &num[1]);
    printf("%d %d ", num[0], num[1]);

    for (int i=2; i<100; i++) {
        num[i] = num[i - 2] - num[i - 1];
        printf("%d ", num[i]);

        if (num[i] < 0) {
            break;
        }
    }
    printf("\n");
}


// 결과 : 50 75 85 95 100
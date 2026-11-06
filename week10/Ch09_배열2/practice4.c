// 5개의 정수를 {95, 75, 85, 100, 50}로 초기화하고 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[5] = {95, 75, 85, 100, 50};
    int temp;

    for (int i=0; i<4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}


// 결과 : 50 75 85 95 100
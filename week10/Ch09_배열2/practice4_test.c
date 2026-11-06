// 10개의 정수를 입력받아 배열에 저장한 후 내림차순으로 정렬하여 출력하시오.
#include <stdio.h>

int main() {
    int num[10];
    int temp;

    for (int i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    for (int i=0; i<10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (num[i] < num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i=0; i<10; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}


// 결과
// 입력 : 95 100 88 65 76 89 58 93 77 99
// 출력 : 100 99 95 93 89 88 77 76 65 58
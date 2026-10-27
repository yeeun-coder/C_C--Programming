#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    if (month == 2) {
        printf("28\n");
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30\n");
    } else {
        printf("31\n");
    }
}


// 결과
// 입력 : 2
// 출력 : 28

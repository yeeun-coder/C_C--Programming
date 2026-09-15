#include <stdio.h>

int main() {
    int month;

    printf("월을 입력하세요 : ");
    scanf("%d", &month);

    switch (month) {
        case 2:
            printf("28일\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30일\n");
            break;
        default:
            printf("31일\n");
    }

    return 0;
}

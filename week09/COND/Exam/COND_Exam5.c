#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    switch (month)
    {
    case 2:
        printf("28\n");
        break;
    case 4:
        printf("30\n");
        break;
    case 6:
        printf("30\n");
        break;
    case 9:
        printf("30\n");
        break;
    case 11:
        printf("30\n");
        break;
    
    default:
        printf("31\n");
        break;
    }
}


// 결과
// 입력 : 2
// 출력 : 28

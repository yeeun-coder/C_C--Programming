#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
        printf("dog\n");
        break;
    case 2:
        printf("cat\n");
        break;
    case 3:
        printf("chick\n");
        break;
    
    default:
        printf("blank\n");
        break;
    }
}


// 결과
// 입력 : 1
// 출력 : dog

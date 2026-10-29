#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    for (int i=1; num >= i; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


// 결과
// 입력 : 5
// 출력 : 1 2 3 4 5

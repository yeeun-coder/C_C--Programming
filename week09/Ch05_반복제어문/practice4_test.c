#include <stdio.h>

int main() {
    int num;
    int small = 0;
    int large = 1;
    
    while (1) {
        scanf("%d", &num);

        if (num >= 100) {
            break;
        } else if (num < 50) {
            small++;
        } else {
            large++;
        }
    }
     
    printf("small : %d\n", small);
    printf("large : %d\n", large);

    return 0;
}


// 결과
// 입력 : 10 30 50 70 99 100
// 출력
// small : 2
// large : 4

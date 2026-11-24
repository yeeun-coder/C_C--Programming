#include <stdio.h>

int main(void) {
    char food[5];
    printf("좋아하는 음식은?\n");
    scanf("%s", food);
    printf("좋아하는 음식: %s\n", food);

    return 0;
}


// 결과 
// 입력 : 오므라이스
// 출력 : 오
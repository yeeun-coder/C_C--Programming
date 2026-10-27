#include <stdio.h>

int main() {
    int height;
    int weight;
    int result;

    scanf("%d %d", &height, &weight);

    result = weight + 100 - height;
    printf("%d\n", result);

    if (result > 0) {
        printf("Obesity\nNeed control\n");
    }
}


// 결과
// 1)
// 입력 : 170 65
// 출력 : -5

// 2)
// 입력 : 170 80
// 출력 : 
// 10
// Obesity
// Need control

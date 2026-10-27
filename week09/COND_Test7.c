#include <stdio.h>

int main() {
    char eng;
    scanf(" %c", &eng);

    if (eng == 'A') {
        printf("Excellent\n");
    } else if (eng == 'B') {
        printf("Good\n");
    } else if (eng == 'C') {
        printf("Usually\n");
    } else {
        printf("error\n");
    }
}


// 결과
// 1)
// 입력 : B
// 출력 : Good

// 2)
// 입력 : D
// 출력 : error

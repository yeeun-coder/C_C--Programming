// 문자 10개를 저장할 수 있는 배열을 만들고 10개의 문자를 입력받아 입력받은 문자를 이어서 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    char eng[10];

    for (int i=0; i<10; i++) {
        scanf(" %c", &eng[i]);
    }

    for (int i=0; i<10; i++) {
        printf("%c", eng[i]);
    }
    printf("\n");
}


// 결과
// 입력 : A B C D E F G H I J
// 출력 : ABCDEFGHIJ
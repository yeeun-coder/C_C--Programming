// 10개의 문자를 입력받아 마지막으로 입력받은 문자부터 첫 번째 입력받은 문자까지 차례로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    char eng[10];

    for (int i=0; i<10; i++) {
        scanf(" %c", &eng[i]);
    }

    for (int i=9; i>=0; i--) {
        printf("%c ", eng[i]);
    }
    printf("\n");
}



// 결과
// 입력 : A E C X Y Z c b z e
// 출력 : e z b c Z Y X C E A

// 정수 10개를 저장할 수 있는 배열을 만들어서 1부터 10까지를 대입하고 차례대로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[10];

    for (int i=0; i<10; i++) {
        num[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}


// 결과 : 1 2 3 4 5 6 7 8 9 10
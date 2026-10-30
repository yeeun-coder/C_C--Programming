// 대문자를 'A'부터 'Z'까지 차례로 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    char eng;

    for (eng='A'; eng<='Z'; eng++) {
        printf("%c", eng);
    }
    printf("\n");
}


// 결과 : ABCDEFGHIJKLMNOPQRSTUVWXYZ

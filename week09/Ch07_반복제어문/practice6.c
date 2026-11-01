// for문을 이용하여 다음과 같이 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int cnt = 1;
    char eng = 'a';

    for (int i=1; i<=4; i++) {
        for (int j=1; j<=i; j++) {
            printf("%c ", eng);
            eng++;
        }
        for (int j=1; j<=5-i; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }

    return 0;
}


// 결과
// a 1 2 3 4
// b c 5 6 7
// d e f 8 9
// g h i j 10

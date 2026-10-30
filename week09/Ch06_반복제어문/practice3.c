// 1부터 20까지의 홀수를 차례대로 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;

    for (num=1; num<=20; num++) {
        if (num % 2 != 0) {
            printf("%d ", num);
        }
    }
    printf("\n");
}


// 결과 : 1 3 5 7 9 11 13 15 17 19

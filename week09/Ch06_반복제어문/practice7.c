// 아래 출력예와 같이 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}


// 결과
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

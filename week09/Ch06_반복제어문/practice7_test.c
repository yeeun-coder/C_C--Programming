// 아래와 같이 출력되는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    for (int i=2; i<=6; i++) {
        for (int j=2; j<=6; j++) {
            printf("%d ", i + j - 2);
        }
        printf("\n");
    }

    return 0;
}


// 결과 
// 2 3 4 5 6
// 3 4 5 6 7 
// 4 5 6 7 8
// 5 6 7 8 9
// 6 7 8 9 10

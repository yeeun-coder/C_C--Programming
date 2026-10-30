// 행과 열의 수를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.
// (단과 단 사이의 공백은 3칸)
# include <stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);

    for (int i=1; i<=x; i++) {
        for (int j=1; j<=y; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}


// 결과
// 입력 : 3 4
// 출력
// 1 2 3 4
// 2 4 6 8
// 3 6 9 12

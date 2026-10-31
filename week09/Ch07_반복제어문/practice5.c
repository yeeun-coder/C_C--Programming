// 자연수 n을 입력받아 n줄만큼 다음과 같이 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int cnt = 1;
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }

    return 0;
}


// 결과 
// 입력 : 5
// 출력
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

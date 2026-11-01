// 10 이하의 자연수 n을 입력받아 각 문제의 출력예와 같이 출력되는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int cnt = 0;
    char eng = 'A';
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {
        for (int j=1; j<=num+1-i; j++) {
            printf("%c ", eng);
            eng++;
        }
        for (int j=1; j<=i-1; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }

    return 0;
}


// 결과
// 입력 : 3
// 출력 
// A B C
// D E 0
// F 1 2

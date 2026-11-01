// 10 이하의 자연수 n을 입력받아 각 문제의 출력예와 같이 출력되는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int cnt = 1;
    scanf("%d", &num);

    for (int i=num; i>=1; i--) {
        for (int j=1; j<=num-i; j++) {
            printf("  ");
        }
        for (int j=1; j<=i; j++) {
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
// 1 2 3 
//  4 5
//    6

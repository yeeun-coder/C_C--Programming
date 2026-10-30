// 한 개의 수를 입력받아 1부터 입력받은 수까지의 짝수를 차례대로 출력하는 프로그램 을 작성하시오.
// (입력받는 수는 2 이상 50 이하의 정수이다.)
# include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 2 && num <= 50) {
        for (int i=2; i<=num; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");
}


// 결과
// 입력 : 10
// 출력 : 2 4 6 8 10 

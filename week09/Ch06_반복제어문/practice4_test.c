// 정수를 입력받아서 입력받은 정수부터 100까지의 합을 출력하는 프로그램을 작성하시오.
// (입력받는 정수는 100 이하의 자연수이다.)
# include <stdio.h>

int main() {
    int num;
    int sum = 0;
    scanf("%d", &num);

    if (num <= 100) {
        for (int i=num; i<=100; i++) {
            sum += i;
        }
        printf("%d\n", sum);
    }
}


// 결과
// 입력 : 95
// 출력 : 585

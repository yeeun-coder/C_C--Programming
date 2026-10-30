// 한 개의 자연수를 입력받아 그 수의 배수를 차례로 10개 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i=1; i<=10; i++) {
        printf("%d ", num * i);
    }
    printf("\n");

    return 0;
}


// 결과
// 입력 : 5
// 출력 : 5 10 15 20 25 30 35 40 45 50

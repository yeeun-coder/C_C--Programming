// 10개의 정수를 입력받아 그 수들 중 짝수의 개수가 몇 개인지 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int cnt = 0;

    for (int i=0; i<10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            cnt++;
        }
    }
    printf("Even numbers = %d\n", cnt);
}


// 결과
// 입력 : 15 22 3 129 66 81 35 1 46 888
// 출력 : Even numbers = 4

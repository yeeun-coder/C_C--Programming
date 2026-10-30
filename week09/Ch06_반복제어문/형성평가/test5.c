// 10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int even = 0;
    int odd = 0;

    for (int i=1; i<=10; i++) {
        scanf("%d", &num);
        if (num % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }

    printf("even : %d\n", even);
    printf("odd : %d\n", odd);

    return 0;
}


// 결과 
// 입력 : 10 20 30 55 66 77 88 99 100 15
// 출력
// even : 6
// odd : 4

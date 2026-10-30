// 10개의 정수를 입력받아 3의 배수의 개수와 5의 배수의 개수를 각각 출력하는 프로그 램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int cnt3 = 0;
    int cnt5 = 0;

    for (int i=0; i<10; i++) {
        scanf("%d", &num);

        if (num % 3 == 0) {
            cnt3++;
        }
        if (num % 5 == 0) {
            cnt5++;
        }
    }
    printf("Multiples of 3 : %d\n", cnt3);
    printf("Multiples of 5 : %d\n", cnt5);
}


// 결과
// 입력 : 10 15 36 99 100 19 46 88 87 13
// 출력 
// Multiples of 3 : 4
// Multiples of 5 : 3

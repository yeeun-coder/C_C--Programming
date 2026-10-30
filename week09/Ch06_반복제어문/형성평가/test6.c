// 두 개의 정수를 입력받아 작은 수부터 큰 수까지 3의 배수이거나 5의 배수인 수들의 합과 평균을 출력하는 프로그램을 작성하시오.
// (평균은 반올림하여 소수 첫째자리까지 출력한다.)
# include <stdio.h>

int main() {
    int num1, num2;
    int min, max;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        min = num1;
        max = num2;
    } else {
        min = num2;
        max = num1;
    }

    for (int i=min; i<=max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            cnt++;
        }
    }

    float avg = (float)sum / cnt;
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}


// 결과 
// 입력 : 10 15
// 출력
// sum : 37
// avg : 12.3

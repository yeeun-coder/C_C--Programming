// 100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오.
// (평균은 반올림하여 소수 둘째자리까지 출력하도록 한다.)
# include <stdio.h>

int main() {
    int num;
    int grade;
    int sum = 0;
    int cnt = 0;
    scanf("%d", &num);

    if (num <= 100) {
        for (int i=1; i<=num; i++) {
            scanf("%d", &grade);
            sum += grade;
            cnt++;
        }
    }
    float avg = (float)sum / cnt;

    printf("%.2f\n", avg);

    return 0;
}


// 결과 
// 입력
// 3
// 99 65 30
// 출력 : 64.67

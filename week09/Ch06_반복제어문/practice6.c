// 5명의 성적을 입력받아서 총점과 평균을 출력하는 프로그램을 작성하시오.
// (평균은 반올림하여 소수 첫째자리까지 출력한다.)
# include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int cnt = 0;

    for (int i=0; i<5; i++) {
        scanf("%d", &num);

        sum += num;
        cnt++;
    }
    float avg = (float)sum / cnt;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
}


// 결과
// 입력 : 90 85 100 66 88
// 출력 
// sum : 429
// avg : 85.8

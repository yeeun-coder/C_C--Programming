// 10 이하의 과목수 n을 입력받은 후 n개 과목의 점수를 입력받아서 평균을 구하여 출력하고 평균이 80점 이상이면 "pass", 
// 아니면 "fail"이라고 출력하는 프로그램을 작성하시오.
// 평균은 반올림하여 소수 첫째자리까지 출력한다.
# include <stdio.h>

# include <stdio.h>

int main() {
    int num;
    int grade;
    int sum = 0;
    int cnt = 0;
    scanf("%d", &num);

    for (int i=0; i<num; i++) {
        scanf("%d", &grade);

        sum += grade;
        cnt++;
    }
    float avg = (float)sum / cnt;

    printf("avg : %.1f\n", avg);
    if (avg >= 80.0) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
}


// 결과
// 1)
// 입력
// 4
// 75 80 85 90
// 출력 
// avg : 82.5
// pass

// 2)
// 입력
// 4
// 75 80 85 70
// 출력 
// avg : 77.5
// fail

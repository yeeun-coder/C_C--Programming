// 학생들의 점수를 입력받다가 0이 입력되면 그 때까지 입력받은 
// 점수를 10점 단위로 구분하여 점수대별 학생 수를 출력하는 프로그램을 작성하시오. 
// (한 명도 없는 점수는 출력하지 않는다.)
#include <stdio.h>

int main() {
    int num[100];
    int count[11] = {0};

    for (int i=0; i<100; i++) {
        scanf("%d", &num[i]);
        if (num[i] == 0) {
            break;
        }
        count[num[i] / 10]++;
    }

    for (int i=10; i>=0; i--) {
        if (count[i] > 0) {
            if (i == 10) {
                printf("100 : %d\n", count[i]);
            } else if (i < 1) {
                printf("%d : %d\n", i, count[i]);
            } else {
                printf("%d0 : %d\n", i, count[i]);
            }
        }
    }
    printf("\n");

    return 0;
}



// 결과
// 입력 : 63 80 95 100 46 64 88 0
// 출력
// 100 : 1
// 90 : 1
// 80 : 2
// 60 : 2
// 40 : 1
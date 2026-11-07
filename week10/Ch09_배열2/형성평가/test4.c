// 20 이하의 정수 n을 입력받고 n명의 점수를 입력받아 높은 점수부터 차례로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num;
    int temp;
    scanf("%d", &num);

    int grade[num];

    for (int i=0; i<num; i++) {
        scanf("%d", &grade[i]);
    }

    for (int i=0; i<num-1; i++) {
        for (int j=i+1; j<num; j++) {
            if (grade[i] < grade[j]) {
                temp = grade[i];
                grade[i] = grade[j];
                grade[j] = temp;
            }
        }
    }

    for (int i=0; i<num; i++) {
        printf("%d\n", grade[i]);
    }

    return 0;
}



// 결과
// 입력 
// 5
// 35 10 35 100 64

// 출력 
// 100
// 64
// 35
// 35
// 10
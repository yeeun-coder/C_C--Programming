// 100 이하의 정수 n을 입력받고, n개의 자연수를 입력받아 배열에 저장한 후, 
// 그 중 가장 큰 수를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);

    int num2[num1];

    for (int i=0; i<num1; i++) {
        scanf("%d", &num2[i]);
    }

    int max = num2[0];

    for (int i=1; i<num1; i++)
    {
        if (num2[i] > max) {
            max = num2[i];
        }
    }
    printf("%d\n", max);
}


// 결과
// 입력
// 10
// 5 10 8 55 6 31 12 24 61 2
// 출력 : 61
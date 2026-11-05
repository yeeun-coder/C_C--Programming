// 정수를 계속 입력받아서 배열에 저장하다가 0이 입력되면 입력을 중단하고, 
// 배열에 저장된 값들 중 최대값과 최소값을 구하여 그 차를 출력하는 프로그램을 작성하시오.
// (입력되는 정수의 개수는 한 개이상 100개 이하이다.)
#include <stdio.h>

int main() {
    int num[100];
    int cnt = 0;

    for (int i=0; i<100; i++) {
        scanf("%d", &num[i]);
        if (num[i] == 0) {
            break;
        }
        cnt++;
    }

    int max = num[0];
    int min = num[0];

    for (int i=1; i<cnt; i++)
    {
        if (num[i] > max) {
            max = num[i];
        } else if (num[i] < min) {
            min = num[i];
        }
    }
    printf("%d\n", max - min);
}


// 결과
// 입력 : 88 123 659 15 443 1 99 313 105 48 0
// 출력 : 658
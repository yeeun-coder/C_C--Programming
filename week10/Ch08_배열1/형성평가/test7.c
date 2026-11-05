// 100개 이하의 정수를 입력받다가 0이 입력되면, 
// 0을 제외하고 그 때까지 입력받은 개수를 출력한 후 입력받은 정수를 차례로 출력하되 그 수가 홀수이면 두 배 한 값을, 
// 짝수인 경우에는 2로 나눈 몫을 출력하는 프로그램을 작성하시오.
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
    printf("%d\n", cnt);
    
    for (int i=0; i<cnt; i++) {
        if (num[i] % 2 != 0) {
            num[i] *= 2;
            printf("%d ", num[i]);
        } else {
            num[i] /= 2;
            printf("%d ", num[i]);
        }
    }
    printf("\n");
}


// 결과
// 입력 : 8 10 5 15 100 0
// 출력
// 5
// 4 5 10 30 50
// 10 미만의 자연수 두 개를 입력받아서 첫 번째 항과 두 번째 항을 입력받은 수로 초기화시킨 후
//  세 번째 항부터는 전전항과 전항의 합을 구하여 그 합의 1의 자리로 채워서 
// 차례로 10개를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    int num[10];

    for (int i=0; i<2; i++) {
        scanf("%d", &num[i]);
    }

    for (int i=2; i<10; i++) {
        num[i] = (num[i-2] + num[i-1]) % 10;
    }

    for (int i=0; i<10; i++) {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}



// 결과
// 입력 : 3 5
// 출력 : 3 5 8 3 1 4 5 9 4 3
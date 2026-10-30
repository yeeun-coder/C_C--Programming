// 두 개의 정수를 입력받아 작은 수부터 큰 수까지 차례대로 출력하는 프로그램을 작성하시 오.
// (입력으로 주어지는 정수는 100이하의 자연수이다.)
# include <stdio.h>

int main() {
    int num1, num2;
    int small, big;
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        small = num1;
        big = num2;
    } else {
        small = num2;
        big = num1;
    }

    for (int i=small; i<=big; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


// 결과 
// 입력 : 10 5
// 출력 : 5 6 7 8 9 10 

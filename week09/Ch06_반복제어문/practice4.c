// 자연수를 입력받아서 1부터 입력받은 수까지의 합을 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int sum = 0;
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {
        sum += i;
    }
    printf("%d\n", sum);
}


// 결과
// 입력 : 10
// 출력 : 55

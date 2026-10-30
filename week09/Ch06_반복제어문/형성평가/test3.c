// 정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int sum = 0;
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}


// 결과 
// 1)
// 입력 : 20
// 출력 : 50 

// 2)
// 입력 : 10
// 출력 : 15 

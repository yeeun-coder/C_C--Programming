#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int i = 1;
    scanf("%d", &num);
    
    while (num >= i) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}


// 결과
// 입력 : 10
// 출력 : 55

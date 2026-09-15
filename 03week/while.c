#include <stdio.h>

int main() {
    int num1, num2;
    int temp;

    printf("첫 번째 세 자리 수를 입력하세요 : ");
    scanf("%d", &num1);
    printf("두 번째 세 자리 수를 입력하세요 : ");
    scanf("%d", &num2);

    temp = num2;
    while (temp > 0)
    {
        printf("%d\n", num1*(temp % 10));
        temp /= 10;
    }
    
    printf("%d\n", num1*num2);
    return 0;
}

#include <stdio.h>
int main() {
    int x = 3;
    int num;
    scanf("%d", &num);

    while (x < 8) {     
        x++;            
    }
    
    printf("%d\n", x);

    int sum = x - 1;     
    printf("%d %d %d\n", sum, num, x);  
    return 0;
}


// 결과
// 입력 : 5
// 출력
// 8
// 7 5 8


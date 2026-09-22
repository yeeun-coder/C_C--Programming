#include <stdio.h>

void printNum(int n) 
{
    if(n == 0) {
        return;
    }
    printNum(n-1);
    printf("%d\n", n);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printNum(n);
    return 0;
}


// 결과
// 입력 : 10
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10

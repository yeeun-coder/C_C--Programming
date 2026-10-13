#include <stdio.h>

#define MAX_SIZE 10  // 배열의 최대 크기 정의

int main() {
    int ary[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // 배열 초기화
    int *TStart;
    int *TEnd;

    // 배열을 정방향으로 출력
    printf("Array forward : ");
    for (TStart = ary, TEnd = ary + MAX_SIZE; TStart < TEnd; TStart++) {
        printf("%3d ", *TStart);  // 현재 포인터가 가리키는 값 출력
    }
    printf("\n");

    // 배열을 역방향으로 출력
    printf("Array backward : ");
    for (TStart = TEnd - 1; TStart >= ary; TStart--) {
        printf("%3d ", *TStart);  // 현재 포인터가 가리키는 값 출력
    }
    printf("\n");

    return 0;
}


// 실행 결과
// Array forward :   1   2   3   4   5   6   7   8   9  10 
// Array backward :  10   9   8   7   6   5   4   3   2   1 

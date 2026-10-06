#include <stdio.h>

int main() {

    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    // 삽입 정렬
    // 첫 번째 값은 이미 정렬되어 있다고 생각한다.
    for (int i = 1; i < n; i++) {

        // 현재 정렬할 값을 저장
        int key = arr[i];

        // key의 앞쪽에 있는 값의 위치
        int j = i - 1;

        // key보다 큰 값은 한 칸씩 뒤로 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 자리에 key를 삽입
        arr[j + 1] = key;
    }

    // 정렬된 배열 출력
    printf("정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

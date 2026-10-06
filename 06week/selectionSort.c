#include <stdio.h>

int main() {

    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    // 선택형 정렬
    for (int i = 0; i < n - 1; i++) {

        // 가장 작은 값의 위치를 저장
        int minIndex = i;

        // i 다음 위치부터 가장 작은 값을 찾는다.
        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[minIndex]) {
                // 더 작은 값을 찾으면 위치를 변경
                minIndex = j;
            }
        }

        // 가장 작은 값과 현재 위치의 값을 교환
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // 정렬된 배열 출력
    printf("정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

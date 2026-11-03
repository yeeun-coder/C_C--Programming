#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;  // 시작 위치를 0으로 설정
    int right = size -1;  // 끝 위치를 배열 크기 -1로 설정

    while(left <= right) {  // 시작 위치가 끝 위치보다 작거나 같은 동안 반복
        int mid = (left + right) / 2;  // 중간 위치 계산

        if(arr[mid] == target) {  // 중간 위치의 값이 찾을 값과 같으면
            return mid;  // 중간 위치를 반환하고 탐색 종료
        } 
        else if(arr[mid] < target) {  // 중간 위치의 값이 찾을 값보다 작으면
            left = mid + 1;  // 시작 위치를 중간 위치 + 1로 이동
        } 
        else {
            right = mid - 1;  // 끝 위치를 중간 위치 - 1로 이동
        }
    }
    return -1;  // 반복이 종료될 떄까지 값을 찾지 못하면 -1 반환
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if(result != -1) {
        printf("원소 %d는 인덱스 %d에 존재합니다.\n", target, result);
    } else {
        printf("원소 찾지 못했습니다.\n");
    }

    return 0;
}


// 결과 출력 : 원소 23는 인덱스 5에 존재합니다.

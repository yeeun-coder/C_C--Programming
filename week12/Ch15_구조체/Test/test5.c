// 정수 n을 입력받은 후 n명의 이름(20자 이하)과 세 과목의 점수를 입력받아 
// 총점이 높은 순으로 정렬하여 출력하는 프로그램이다. (1 ≤ n ≤ 10)
// 입력, 정렬, 출력 함수를 작성하시오.
#include <stdio.h>

struct Student {
    char name[20];
    int score[3];
    int total;   // 총점
};

void input(struct Student arr[10], int n){
    //여기에 작성하세요.
    for (int i=0; i<n; i++) {
        scanf("%19s", arr[i].name);

        arr[i].total = 0;

        for (int j=0; j<3; j++) {
            scanf("%d", &arr[i].score[j]);
            arr[i].total += arr[i].score[j];
        }
    }
}

void sort(struct Student arr[10], int n){
    //여기에 작성하세요.
    struct Student temp;

    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i].total < arr[j].total) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void output(struct Student arr[10], int n){
    //여기에 작성하세요.
    for (int i=0; i<n; i++) {
        printf("%s ", arr[i].name);

        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i].score[j]);
        }

        printf("%d\n", arr[i].total);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    
    struct Student arr[10];
    
    input(arr, n);
    sort(arr, n);
    output(arr, n);
    
    return 0;
}


// 결과
// 입력 
// 3
// Chung 50 65 89
// Nolbu 100 38 99
// Hungbu 85 95 77

// 출력 
// Hungbu 85 95 77 257
// Nolbu 100 38 99 237
// Chung 50 65 89 204
#include <stdio.h>

#define MAX_STUDENTS 50

void bubbleSort(int *arr, int size);

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int numStudents;
    printf("학생 수를 입력하세요. (최대 50명) : ");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("입력 가능한 학생 수를 초과했습니다. \n");
        return 1;
    }

    int *gradesPointer;        // int형 포인터 변수 선언
    int grades[MAX_STUDENTS];  // int형 배열 grades 선언
    gradesPointer = grades;

    for (int i = 0; i < numStudents; i++) {
        printf("%d번 학생의 최종 점수를 입력하세요. : ", i + 1);
        scanf("%d", gradesPointer + i);
    }

    bubbleSort(gradesPointer, numStudents);

    printf("\n정렬된 성적 : ");
    for (int i = 0; i < numStudents; i++) {
        printf("%d ", *(gradesPointer + i));
    }
    printf("\n\n최고 성적 : %d\n", *(gradesPointer + numStudents - 1));
    printf("최하 성적 : %d\n", *(gradesPointer));

    return 0;
}


// 실행 결과(입력)
// 학생 수를 입력하세요. (최대 50명) : 10
// 1번 학생의 최종 점수를 입력하세요. : 58
// 2번 학생의 최종 점수를 입력하세요. : 93
// 3번 학생의 최종 점수를 입력하세요. : 39
// 4번 학생의 최종 점수를 입력하세요. : 43
// 5번 학생의 최종 점수를 입력하세요. : 80
// 6번 학생의 최종 점수를 입력하세요. : 29
// 7번 학생의 최종 점수를 입력하세요. : 58
// 8번 학생의 최종 점수를 입력하세요. : 12
// 9번 학생의 최종 점수를 입력하세요. : 41
// 10번 학생의 최종 점수를 입력하세요. : 5

// 정렬된 성적 : 5 12 29 39 41 43 58 58 80 93 

// 최고 성적 : 93
// 최하 성적 : 5

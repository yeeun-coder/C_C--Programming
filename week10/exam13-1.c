#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float gradePoints;
};

int main() {
    // 구조체 변수 선언
    struct Student student1, student2;

    // 학생1 데이터 초기화
    strcpy(student1.name, "Moon");
    student1.id = 20240001;
    student1.gradePoints = 95.5;

    // 학생2 데이터 초기화
    strcpy(student2.name, "Yun");
    student2.id = 20240002;
    student2.gradePoints = 88.5;

    // 학생1 데이터 출력
    printf("학생 1의 정보:\n");
    printf("이름: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("점수: %.2f\n\n", student1.gradePoints);

    // 학생2 데이터 출력
    printf("학생 2의 정보:\n");
    printf("이름: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("점수: %.2f\n", student2.gradePoints);

    return 0;
}


// 결과 출력 
// 학생 1의 정보:
// 이름: Moon
// ID: 20240001
// 점수: 95.50

// 학생 2의 정보:
// 이름: Yun
// ID: 20240002
// 점수: 88.50

// 어떤 학생의 키는 아버지와 어머니의 키의 평균보다 5cm 크고, 
// 몸무게는 아버지와 어머니 의 몸무게의 평균보다 4.5kg 가볍다고 한다.
// 아버지와 어머니의 키와 몸무게를 입력받아 학생의 키를 출력하는 프로그램이다.
// 학생의 키와 몸무게를 계산하여 구조체로 리턴하는 함수를 작성하시오.
// 키는 정수로, 몸무게는 반올림하여 소수 첫째 자리까지 나타낸다.
#include <stdio.h>
#include <math.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body father, struct Body mother) {
    //여기에 작성하세요.
    struct Body student;
    student.height = (father.height + mother.height) / 2 + 5;
    student.weight = (father.weight + mother.weight) / 2 - 4.5;

    return student;
} 

int main()
{
    struct Body father, mother;
    scanf("%d %lf", &father.height, &father.weight);
    scanf("%d %lf", &mother.height, &mother.weight);

    struct Body student = makeStudent(father, mother);

    printf("height : %dcm\n", student.height);
    printf("weight : %.1fkg\n", student.weight);

    return 0;
}


// 결과
// 입력 
// 175 68.8
// 166 56.4

// 출력 
// height : 175cm
// weight : 58.1kg
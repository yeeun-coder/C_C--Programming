// 5명의 학생 이름과 점수(정수)를 입력받아 점수가 가장 높은 학생의 이름과 점수를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

struct Person
{
   char name[20];
   int grade;
};

int main() {
    struct Person p[5];
    int max = 0;

    for (int i=0; i<5; i++) {
        scanf("%19s %d", p[i].name, &p[i].grade);
    }

    for (int i=1; i<5; i++) {
        if (p[i].grade > p[max].grade) {
            max = i;
        }
    }

    printf("%s %d\n", p[max].name, p[max].grade);

    return 0;
}


// 결과
// 입력 
// Chulsoo 85
// Younghee 92
// Minsoo 78
// Jiyoung 95
// Dohun 88

// 출력 : Jiyoung 95
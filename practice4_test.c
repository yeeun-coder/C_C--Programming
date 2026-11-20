// 5명의 이름과 키를 입력받아 키가 가장 작은 사람의 이름과 키를 출력하는 프로그램 을 작성하시오.
// (이름은 20자 이하이다.)
#include <stdio.h>

struct Person
{
   char name[20];
   int grade;
};

int main() {
    struct Person p[5];
    int min = 0;

    for (int i=0; i<5; i++) {
        scanf("%19s %d", p[i].name, &p[i].grade);
    }

    for (int i=1; i<5; i++) {
        if (p[i].grade < p[min].grade) {
            min = i;
        }
    }

    printf("%s %d\n", p[min].name, p[min].grade);

    return 0;
}


// 결과
// 입력 
// Park 175
// Lee 180
// Choo 185
// Son 193
// Kim 188

// 출력 : Park 175
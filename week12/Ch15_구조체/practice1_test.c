// “이름”, “학교명”, “학년”을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.
// (이름과 학교명은 각각 20자 이하이다.)
#include <stdio.h>

struct Person
{
   char name[20];
   char school[20];
   int age;
};

int main() {
    struct Person p;

    scanf("%19s", p.name);
    scanf("%19s", p.school);
    scanf("%d", &p.age);

    printf("Name : %s\n", p.name);
    printf("School : %s\n", p.school);
    printf("Grade : %d\n", p.age);

    return 0;
}


// 결과
// 입력 : Songjunhyuk Beolmal 6
// 출력 
// Name : Songjunhyuk
// School : Beolmal
// Grade : 6
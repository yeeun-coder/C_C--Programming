// “학교명”, “학년”을 저장할 수 있는 구조체로 두 개의 변수를 선언한 후, 
// 한 개의 변수는 학교명에 “Jejuelementary”, 학년을 6으로 각각 초기화하고 
// 다른 변수에는 새로운 학교와 학년을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.
// (학교명은 30자 이하이다.)
#include <stdio.h>

struct Person
{
   char school[20];
   int age;
};

int main() {
    struct Person p1 = {"Jejuelementary", 6};
    struct Person p2;

    scanf("%19s", p2.school);
    scanf("%d", &p2.age);

    printf("%d grade in %s School\n", p1.age, p1.school);
    printf("%d grade in %s School\n", p2.age, p2.school);

    return 0;
}


// 결과
// 입력 : Seogwipomiddle 1 
// 출력 
// 6 grade in Jejuelementary School
// 1 grade in Seogwipomiddle School
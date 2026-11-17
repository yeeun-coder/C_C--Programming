// 이름과 나이를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>

struct Person
{
   char name[30];
   int age;
};

int main() {
    struct Person p;

    scanf("%29s", p.name);
    scanf("%d", &p.age);

    printf("Your name is %s and you are %d years old.", p.name, p.age);

    return 0;
}


// 결과
// 입력 
// Gildong
// 15

// 출력 : Your name is Gildong and you are 15 years old.

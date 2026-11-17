// 자신의 이름과 나이를 초기화하고 친구의 이름과 나이를 입력받아 모두 출력하는 프로그램을 작성하시오.
#include <stdio.h>

struct Person
{
   char name[20];
   int age;
};

int main() {
    struct Person m = {"Yejun", 12};
    struct Person f;

    scanf("%19s", f.name);
    scanf("%d", &f.age);

    printf("Your name: %s, age: %d\n", m.name, m.age);
    printf("Friend's name: %s, age: %d\n", f.name, f.age);

    return 0;
}


// 결과
// 입력 : sujin 13
// 출력 
// Your name: Yejun, age: 12
// Friend's name: sujin, age: 13
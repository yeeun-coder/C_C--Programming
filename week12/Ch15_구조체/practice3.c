// 세 명의 이름(20자 이하)과 나이를 입력받아 구조체 배열에 저장한 뒤, 
// 아래 출력 예와 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>

struct Person
{
   char name[20];
   int age;
};

int main() {
    struct Person p[3];

    for (int i=0; i<3; i++) {
        scanf("%19s %d", p[i].name, &p[i].age);
    }

    for (int i=0; i<3; i++) {
        printf("Name : %s\n", p[i].name);
        printf("Age  : %d\n", p[i].age);
    }

    return 0;
}


// 결과
// 입력 
// Gildong 15
// Sujin 13
// Yejun 12

// 출력 
// Name : Gildong
// Age  : 15
// Name : Sujin
// Age  : 13
// Name : Yejun
// Age  : 12
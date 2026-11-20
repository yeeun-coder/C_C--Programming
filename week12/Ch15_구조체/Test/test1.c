// 이름과 전화번호, 주소를 멤버로 하는 구조체를 정의하여 1개의 자료를 입력받고 
// 아래 출력 예와 같은 형식으로 출력하는 프로그램을 작성하시오.
// (각각의 길이는 100자 이하이다.)
#include <stdio.h>

struct Person
{
   char name[100];
   char phone[100];
   char addr[100];
};

int main() {
    struct Person p;

    scanf("%99s %99s %99s", p.name, p.phone, p.addr);
    printf("name : %s\ntel : %s\naddr : %s\n", p.name, p.phone, p.addr);

    return 0;
}


// 결과
// 입력 : Lim 1234-5678 Seoul
// 출력 
//  name : Lim
// tel : 1234-5678
// addr : Seoul
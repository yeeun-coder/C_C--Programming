// 위 1번과 같은 자료를 배열로 선언하여 세 명의 자료를 입력받은 후 
// 사전순으로 이름이 가장 빠른 사람의 자료를 출력 예와 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <string.h>

struct Person
{
   char name[100];
   char phone[100];
   char addr[100];
};

int main() {
    struct Person p[3];
    int fast;

    for (int i=0; i<3; i++) {
        scanf("%99s %99s %99s", p[i].name, p[i].phone, p[i].addr);
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (strcmp(p[i].name, p[j].name) < 0) {
                fast = i;
            }
        }
    }

    printf("name : %s\ntel : %s\naddr : %s\n", p[fast].name, p[fast].phone, p[fast].addr);

    return 0;
}


// 결과
// 입력 
// Lim 1234-5678 Seoul
// Hong 2345-6789 Gangwon
// Sung 3456-7890 Gyeonggi

// 출력 
// name : Hong
// tel : 2345-6789
// addr : Gangwon
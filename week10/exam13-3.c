#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address {
    char street[100];
    char city[50];
    char state[50];
    int zipCode;
};
struct Employee {
    char name[50];
    struct Address* address;
};

int main() {
    // 구조체 인스턴스 생성
    struct Employee emp;
    struct Address addr;

    // 주소 정보 동적 할당 및 초기화
    emp.address = &addr;
    printf("직원 이름을 입력하세요: ");
    fgets(emp.name, 50, stdin);

    printf("거리 이름을 입력하세요: ");
    fgets(emp.address->street, 100, stdin);

    printf("도시를 입력하세요: ");
    fgets(emp.address->city, 50, stdin);

    printf("구를 입력하세요: ");
    fgets(emp.address->state, 50, stdin);

    printf("우편번호를 입력하세요: ");
    scanf("%d", &emp.address->zipCode);

    printf("\n입력된 직원 정보:\n");
    printf("이름: %s", emp.name);
    printf("주소: %s, %s, %s, %d\n", emp.address->street, emp.address->city, 
                                    emp.address->state, emp.address->zipCode);

    return 0;
}


// 결과 : ()는 입력을 뜻함
// 직원 이름을 입력하세요: (문석재)
// 거리 이름을 입력하세요: (천호대로)
// 도시를 입력하세요: (서울)
// 구를 입력하세요: (광진구)
// 우편번호를 입력하세요: (134819)

// 입력된 직원 정보:
// 이름: 문석재
// 주소: 천호대로
// , 서울
// , 광진구
// , 134819

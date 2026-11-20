// 세 명의 이름과 키를 입력받아 출력예와 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>

struct Person
{
   char name[20];
   int height;
};

int main() {
    struct Person p[3];

    for (int i=0; i<3; i++) {
        scanf("%19s %d", p[i].name, &p[i].height);
    }

    for (int i=0; i<3; i++) {
        printf("%s : %dcm\n", p[i].name, p[i].height);
    }

    return 0;
}


// 결과
// 입력 
// Gildong 155
// Sujin 149
// Yejun 163

// 출력 
// Gildong : 155cm
// Sujin : 149cm
// Yejun : 163cm

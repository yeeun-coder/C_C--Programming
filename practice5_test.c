// 5명의 이름과 키, 몸무게를 입력받아 이름순으로 정렬하여 출력하는 출력하는 프로그 램을 작성하시오.
#include <stdio.h>
#include <string.h>

struct Person
{
   char name[20];
   int height;
   float weight;
};

int main() {
    struct Person p[5];
    struct Person temp;

    for (int i=0; i<5; i++) {
        scanf("%19s %d %f", p[i].name, &p[i].height, &p[i].weight);
    }

    for (int i=0; i<4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(p[i].name, p[j].name) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for (int i=0; i<5; i++) {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}


// 결과
// 입력 
// Lee 150 35.6
// Kim 155 28.9
// Sin 148 32.7
// Jung 160 41.2
// Park 165 38.7

// 출력 
// Jung 160 41.2
// Kim 155 28.9
// Lee 150 35.6
// Park 165 38.7
// Sin 148 32.7
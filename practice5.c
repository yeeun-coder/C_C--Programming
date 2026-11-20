// 5명의 이름과 키, 몸무게를 입력받아 키가 작은 순으로 정렬하여 출력하는 프로그램 을 작성하시오.
#include <stdio.h>

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
            if (p[i].height > p[j].height) {
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
// Seongbin 150 35.6
// Dohun 155 28.9
// Yuri 148 32.7
// Jungwoo 160 41.2
// Choin 165 38.7

// 출력 
// Yuri 148 32.7
// Seongbin 150 35.6
// Dohun 155 28.9
// Jungwoo 160 41.2
// Choin 165 38.7
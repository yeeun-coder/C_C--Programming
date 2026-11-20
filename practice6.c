// 두 점의 좌표를 입력받아 두 점의 중심점의 좌표를 소수 첫째자리까지 출력하는 프로그램을 작성하시오.
#include <stdio.h>

struct Person
{
   int x;
   int y;
};

int main() {
    struct Person p[2];
    float centerX;
    float centerY;

    for (int i=0; i<2; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    centerX = (p[0].x + p[1].x) / 2.0;
    centerY = (p[0].y + p[1].y) / 2.0;

    printf("Center point = (%.1f, %.1f)\n", centerX, centerY);

    return 0;
}


// 결과
// 입력 
// 10 5
// 12 36

// 출력 : Center point = (11.0, 20.5)
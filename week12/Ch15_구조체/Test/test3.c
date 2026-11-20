// 직사각형의 왼쪽 아래의 좌표 (x1, y1)와 오른쪽 위의 좌표 (x2, y2)를 저장할 수 있는 
// 구조체 자료형을 만들고 두 개의 직사각형 자료를 입력받아 두 직사각형을 포함하는 
// 최소의 직사각형 자료를 구하여 구조체 변수에 저장하고 출력하는 프로그램을 작성하시오.
// 단, 모든 입력값은 100을 넘지 않는다.
#include <stdio.h>

struct Rectangle
{
   int x1, y1;
   int x2, y2;
};

int main() {
    struct Rectangle r[2];
    struct Rectangle result;

    for (int i=0; i<2; i++) {
        scanf("%d %d %d %d", &r[i].x1, &r[i].y1, &r[i].x2, &r[i].y2);
    }

    if (r[0].x1 < r[1].x1) result.x1 = r[0].x1;
    else result.x1 = r[1].x1;

    if (r[0].y1 < r[1].y1) result.y1 = r[0].y1;
    else result.y1 = r[1].y1;


    if (r[0].x2 > r[1].x2) result.x2 = r[0].x2;
    else result.x2 = r[1].x2;

    if (r[0].y2 > r[1].y2) result.y2 = r[0].y2;
    else result.y2 = r[1].y2;

    printf("%d %d %d %d\n", result.x1, result.y1, result.x2, result.y2);

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
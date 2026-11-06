// 영문 대문자를 입력받다가 대문자 이외의 문자가 입력되면 그 때까지 한 번 이상 입력된 
// 각 문자의 개수를 사전 순으로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    char eng[100];
    int count[26] = {0};

    for (int i=0; i<100; i++) {
        scanf(" %c", &eng[i]);
        if (eng[i] < 'A' || eng[i] > 'Z') {
            break;
        }
        count[eng[i] - 'A']++;

    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }
    printf("\n");
}


// 결과
// 입력 : A B C F F F B Z !
// 출력 
// A : 1
// B : 2
// C : 1
// F : 3
// Z : 1
// 26개의 문자배열을 선언하고 'A'부터 'Z'까지의 대문자를 차례로 대입 시킨 후 
// 배열의 마지막부터 처음까지 각 문자를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {
    char num[26];

    for (int i=0; i<26; i++) {
        num[i] = 'A' + i;
    }

    for (int i = 25; i >= 0; i--) {
        printf("%c ", num[i]);
    }
    printf("\n");
}


// 결과 : Z Y X W V U T S R Q P O N M L K J I H G F E D C B A
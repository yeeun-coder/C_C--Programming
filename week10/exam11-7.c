#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'M';  // 이 예제에서 검사할 문자
    printf("문자: %c\n", ch);

    printf("알파벳 여부: %s\n", isalpha(ch) ? "예" : "아니오");

    printf("대문자 여부: %s\n", isupper(ch) ? "예" : "아니오"); 

    printf("소문자 여부: %s\n", islower(ch) ? "예" : "아니오");

    printf("숫자 여부: %s\n", isdigit(ch) ? "예" : "아니오");

    printf("알파벳 또는 숫자 여부: %s\n", isalnum(ch) ? "예" : "아니오");

    printf("16진수 숫자 여부: %s\n", isxdigit(ch) ? "예" : "아니오");

    printf("구두점 문자 여부: %s\n", ispunct(ch) ? "예" : "아니오");

    printf("인쇄 가능 문자 여부: %s\n", isprint(ch) ? "예" : "아니오");

    printf("제어 문자 여부: %s\n", iscntrl(ch) ? "예" : "아니오");

    printf("아스키 문자 여부: %s\n", isascii(ch) ? "예" : "아니오");

    return 0;
}


// 결과 출력
// 문자: M
// 알파벳 여부: 예
// 대문자 여부: 예
// 소문자 여부: 아니오
// 숫자 여부: 아니오
// 알파벳 또는 숫자 여부: 예
// 16진수 숫자 여부: 아니오
// 구두점 문자 여부: 아니오
// 인쇄 가능 문자 여부: 예
// 제어 문자 여부: 아니오
// 아스키 문자 여부: 예

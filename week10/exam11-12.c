#include <stdio.h>
#include <string.h>

int main() {
    // 문자 배열 초기화
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    // str1 길이 계산
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // str1 내용을 str3로 복사
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // str2의 첫 n개 문자를 str3에 복사
    strncpy(str3, str2, n);
    str3[n] = '\0'; // 널 문자 추가
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    // str1과 str2 비교
    printf("str1과 str2 비교: %d\n", strcmp(str1, str2));

    // str1과 str2의 첫 n개 문자 비교
    printf("str1과 str2의 첫 %d개 문자 비교: %d\n", n, strncmp(str1, str2, n));

    // str2를 str1 뒤에 연결
    strcat(str1, str2);
    printf("str2를 str1에 연결: %s\n", str1);

    // str1의 첫 n개 문자를 str3에 연결
    strncat(str3, str1, n);
    printf("str1의 첫 %d 문자를 str3에 연결: %s\n", n, str3);

    // str1에서 'p' 문자의 첫 번쨰 찾기
    char *ptr_ch = strchr(str1, ch);
    printf("str1에서 '%c'의 첫 번쨰 출현: %s\n", ch, ptr_ch);

    // str1에서 str2의 첫 번쨰 찾기
    char *ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번쨰 출현: %s\n", ptr_str ? ptr_str : "찾을 수 없음");
    return 0;
}


// 결과 출력
// str1의 길이: 4
// str1을 str3에 복사: Back
// str2의 첫 3 문자를 str3에 복사: Spa
// str1과 str2 비교: -17
// str1과 str2의 첫 3개 문자 비교: -17
// str2를 str1에 연결: BackSpace
// str1의 첫 3 문자를 str3에 연결: SpaBac
// str1에서 'p'의 첫 번쨰 출현: pace
// str1에서 str2의 첫 번쨰 출현: Space

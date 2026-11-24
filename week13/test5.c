#include <stdio.h>
#include <string.h>

void print_reverse(char *s) 
{
    size_t len = strlen(s);

    char *t = s + len - 1;  // 마지막을 가리킴

    while ( t >= s ) {
        printf("%c", *t);

        t = t - 1;
    }
    puts("");
}

int main(void)
{
    char str[100];

    printf("문자열 입력: ");
    scanf("%99s", str);

    printf("문자열 역순 출력: ");
    print_reverse(str);
}


// 결과
// 입력은 ()로 표시
// 문자열 입력: (Hello)
// 문자열 역순 출력: olleH
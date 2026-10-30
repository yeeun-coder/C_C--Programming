// 문자를 입력받아서 입력받은 문자를 20번 반복하여 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    for (int i=0; i<20; i++) {
        printf("%c", ch);
    }
}


// 결과
// 입력 : A
// 출력 : AAAAAAAAAAAAAAAAAAAA

// 자연수 n을 입력받아 다음과 같이 영문자를 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    char eng = 'A';
    scanf("%d", &num);

    for (int i=num; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            printf("%c", eng);
            eng++;
        }
        printf("\n");
    }

    return 0;
}


// 결과
// 입력 : 3
// ABC
// DE
// F

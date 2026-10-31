// 아래 모양과 같이 출력하는 프로그램을 for문을 이용하여 작성하시오.
# include <stdio.h>

int main() {
    for (int i=1; i<=3; i++) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=3; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


// 결과
// 입력 : 5
// 출력 
// *
// **
// ***
// ***
// **
// *

// 아래와 같이 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    for (int i=1; i<=9; i+=2) {
        for (int j = 1; j <= (9 - i) / 2; j++) {
            printf(" ");
        }
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


// 결과 
//     *
//    ***
//   *****
//  *******
// *********

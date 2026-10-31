// 자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    for (int i=2 * num - 1; i>=1; i-=2) {
        for (int j=1; j<=(2*num-1-i)/2; j++) {
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
// 입력 : 3
// 출력
// *****
 // ***
 //  *

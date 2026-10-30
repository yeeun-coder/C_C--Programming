// 10 이하의 정수를 입력받아 입력받은 정수만큼 "Hello for loop"라고 출력하는 프로그 램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 10) {
        for (int i=0; i<num; i++) {
            printf("Hello for loop\n");
        }
    }
}


// 결과
// 입력 : 5
// 출력
// Hello for loop
// Hello for loop
// Hello for loop
// Hello for loop
// Hello for loop

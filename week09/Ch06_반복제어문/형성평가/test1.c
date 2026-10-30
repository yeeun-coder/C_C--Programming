// 10 이하의 자연수 n을 입력받아 아래와 같이 “JUNGOL”을 n번 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i=0; i<num; i++) {
        printf("JUNGOL\n");
    }

    return 0;
}


// 결과 
// JUNGOL
// JUNGOL
// JUNGOL
// JUNGOL

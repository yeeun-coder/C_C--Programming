// 자연수 n을 입력받아서 n개의 줄에 n + 1개의 숫자와 문자로 채워서 다음과 같이 출력하는 프로그램을 작성하시오.
# include <stdio.h>

int main() {
    int num;
    int cnt = 1;
    char eng = 'A';
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {
        for (int j=1; j<=num+1-i; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        for (int j=1; j<=i; j++) {
            printf("%c ", eng);
            eng++;
        }
        printf("\n");
    }

    return 0;
}


// 결과
// 입력 : 3
// 출력 
// 1 2 3 A 
// 4 5 B C 
// 6 D E F 

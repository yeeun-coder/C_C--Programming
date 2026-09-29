#include <stdio.h>

int main()
{
    int cnt[7] = {0};
    int n;

    for(int i=0; i<10; i++) {
        scanf("%d", &n);
        cnt[n]++;
    }

    for(int i=1; i<=6; i++) {
        printf("%d : %d\n", i, cnt[i]);
    }
}


// 실행 : 1 1 2 2 3 3 3 4 5 6
// 결과
// 1 : 2
// 2 : 2
// 3 : 3
// 4 : 1
// 5 : 1
// 6 : 1

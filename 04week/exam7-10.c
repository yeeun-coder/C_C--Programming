// 3주차 pdf
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer;
    int num;

    srand(time(NULL));

    answer = rand() % 100 + 1;

    printf("1부터 100사이에 숫자를 맞혀보세요!");

    while (1)
    {
        printf("숫자 입력: ");
        scanf("%d", &num);

        if (num > answer)
        {
            printf("더 작은 수입니다.\n");
        }
        else if (num < answer) {
            printf("더 큰 수 입니다.\n");
        }
        else {
            printf("정답입니다.\n");
            break;
        }
    }
    return 0;
    
}

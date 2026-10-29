#include <stdio.h>

int main(void)
{
    int num;

    while (1)
    {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
        scanf("%d", &num);
        printf("\n");

        switch (num)
        {
        case 1:
            printf("Seoul\n\n");
            break;
        case 2:
            printf("Washington\n\n");
            break;
        case 3:
            printf("Tokyo\n\n");
            break;
        case 4:
            printf("Beijing\n\n");
            break;
        default:
            printf("none\n");
            return 0;
        }
    }

    return 0;
}


// 결과 : ()는 입력을 뜻함
// 1. Korea
// 2. USA
// 3. Japan
// 4. China
// number? (1)
// Seoul

// 1. Korea
// 2. USA
// 3. Japan
// 4. China
// number? (5)
// none

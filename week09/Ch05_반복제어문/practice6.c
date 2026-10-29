#include <stdio.h>

int main(void)
{
    int num;

    while (1)
    {
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\nEnter number: ");
        scanf("%d", &num);
        printf("\n");

        switch (num)
        {
        case 1:
            printf("You selected Input.\n\n");
            break;
        case 2:
            printf("You selected Output.\n\n");
            break;
        case 3:
            printf("You selected Delete.\n\n");
            break;
        case 4:
            printf("You selected Finish.\n");
            return 0;
        default:
            printf("Wrong input.\n\n");
            break;
        }
    }

    return 0;
}


// 결과 : ()는 입력을 뜻함
// 1. Input
// 2. Output
// 3. Delete
// 4. Finish
// Enter number: (2)
// You selected Output.

// 1. Input
// 2. Output
// 3. Delete
// 4. Finish
// Enter number: (5)
// Wrong input.

// 1. Input
// 2. Output
// 3. Delete
// 4. Finish
// Enter number: (4)
// You selected Finish.

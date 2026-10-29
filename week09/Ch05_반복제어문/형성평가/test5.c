#include <stdio.h>

int main() {
    int length;
    int height;
    float width;
    char answer;

    while (1)
    {
        scanf("%d %d", &length, &height);

        width  = (float)length * height / 2;
        printf("Triangle area = %.1f\n", width);

        printf("Continue? ");
        scanf(" %c", &answer);
        if (answer != 'Y' && answer != 'y')
        {
            break;
        }
    }

    return 0;
}


// 결과 : ()는 입력을 뜻함
// (11 5)
// Triangle area = 27.5
// Continue? (Y)
// (10 10)
// Triangle area = 50.0
// Continue? (N)


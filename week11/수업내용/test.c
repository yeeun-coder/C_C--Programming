#include <stdio.h>

int main() {

    char test[] = "khg";
    test[1] = test[0]; 
    
    printf("%s\n", test);
    return 0;
}


// 결과 : kkg

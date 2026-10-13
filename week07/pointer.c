#include <stdio.h>

int main() {
    int i = 10;
    int *p;

    p = &i;

    printf("p = %p \n", p);
    printf("(*p)++ = %d \n", (*p)++);
    printf("*p++ = %d \n", *p++);
    printf("p++ = %p \n", p++);

    return 0;
}


// 실행 결과 
// p = 0x16da0a9a8 
// (*p)++ = 10 
// *p++ = 11 
// p++ = 0x16da0a9ac 

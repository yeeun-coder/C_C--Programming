// 두 명의 이름과 국어, 영어 점수를 입력받아 각 학생의 점수를 그대로 출력하고, 
// 두 학생의 과목별 합계를 구하여 마지막 줄에 출력하는 프로그램이다.
// 합계를 계산해서 구조체를 리턴하는 plus() 함수를 작성하시오.
#include <stdio.h>
#include <string.h>

struct Score {
    char name[20];
    int kor;
    int eng;
}

struct Score plus(struct Score a, struct Score b){
    //여기에 작성하세요.
    struct Score result;
    strcpy(result.name, "Total");
    result.kor = a.kor + b.kor;
    result.eng = a.eng + b.eng;

    return result;
}

int main(){
    struct Score a, b;
    scanf("%s %d %d", a.name, &a.kor, &a.eng);
    scanf("%s %d %d", b.name, &b.kor, &b.eng);
    
    struct Score result = plus(a, b);
    
    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);
    
    return 0;
}


// 결과
// 입력 
// David 88 100
// Emma 95 96

// 출력 
// David 88 100
// Emma 95 96
// Total 183 196
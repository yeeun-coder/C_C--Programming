# 11주차 C언어 객관식 문제

## 1. 구조체 포인터의 멤버 접근

다음 코드의 실행 결과로 알맞은 것은?

```c
#include <stdio.h>

struct Person {
    int age;
};

int main() {
    struct Person p1;
    struct Person *p = &p1;

    p->age = 20;

    printf("%d\n", p1.age);

    return 0;
}
```

① 0  
② 1  
③ 20  
④ 오류 발생

---

## 2. 구조체를 값으로 전달하는 함수

다음 코드의 실행 결과로 알맞은 것은?

```c
#include <stdio.h>

struct Person {
    int age;
};

void change(struct Person p) {
    p.age = 30;
}

int main() {
    struct Person person = {20};

    change(person);

    printf("%d\n", person.age);

    return 0;
}
```

① 20  
② 30  
③ 0  
④ 오류 발생

---

## 5. 구조체 포인터와 함수 호출

다음 중 구조체 포인터를 매개변수로 받는 함수를 올바르게 호출한 것은?

```c
struct Student {
    int score;
};

void printScore(struct Student *p) {
    printf("%d\n", p->score);
}
```

① `printScore(student);`

② `printScore(&student);`

③ `printScore(*student);`

④ `printScore(score);`

※ `student`는 `struct Student`형 변수이다.

---

## 6. 공용체의 특징

다음 코드의 실행 결과에 대한 설명으로 가장 알맞은 것은?

```c
#include <stdio.h>

union Data {
    int num;
    float value;
};

int main() {
    union Data d;

    d.num = 10;
    d.value = 3.5;

    printf("%.1f\n", d.value);

    return 0;
}
```

① 10.0이 출력된다.

② 3.5가 출력된다.

③ 10과 3.5가 모두 별도의 메모리에 저장된다.

④ 공용체는 값을 저장할 수 없다.

---

## 7. 공용체와 구조체의 차이

다음 중 공용체(union)에 대한 설명으로 옳은 것은?

① 모든 멤버가 각각 별도의 메모리 공간을 사용한다.

② 모든 멤버가 동일한 메모리 위치를 공유한다.

③ 한 번 선언하면 멤버의 값을 변경할 수 없다.

④ 반드시 정수형 멤버만 선언할 수 있다.

---

## 8. 열거형(Enum)의 기본값

다음 코드의 실행 결과로 알맞은 것은?

```c
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    printf("%d %d %d\n", RED, GREEN, BLUE);

    return 0;
}
```

① 1 2 3

② 0 1 2

③ 0 0 0

④ 1 1 1

---

## 9. 열거형의 값 지정

다음 코드의 실행 결과로 알맞은 것은?

```c
#include <stdio.h>

enum Number {
    ONE = 1,
    TWO,
    THREE
};

int main() {
    printf("%d\n", THREE);

    return 0;
}
```

① 1

② 2

③ 3

④ 4

---

## 10. 2차원 배열의 좌표 변환

다음은 너비가 5인 격자에서 픽셀 번호를 행과 열로 변환하는 코드이다.

```c
#include <stdio.h>

int main() {
    int num = 13;
    int width = 5;

    int row = (num - 1) / width;
    int col = (num - 1) % width;

    printf("%d %d\n", row, col);

    return 0;
}
```

실행 결과로 알맞은 것은?

① 1 2

② 2 1

③ 2 2

④ 3 3

---

# 정답

| 문제 | 정답 |
|:---:|:---:|
| 1 | ③ |
| 2 | ① |
| 5 | ② |
| 6 | ② |
| 7 | ② |
| 8 | ② |
| 9 | ③ |
| 10 | ③ |

# 간단한 해설

1. `p->age`는 포인터가 가리키는 구조체의 멤버에 접근하므로 `p1.age`는 20이다.
2. 구조체를 값으로 전달하면 복사본이 전달되므로 원본의 값은 20으로 유지된다.
5. 구조체 포인터 매개변수에는 구조체 변수의 주소인 `&student`를 전달한다.
6. 공용체는 같은 메모리 공간을 공유하며 마지막에 저장한 `value`의 값은 3.5이다.
7. 공용체의 모든 멤버는 동일한 메모리 위치를 공유한다.
8. 열거형의 기본값은 0부터 시작하며 순서대로 1씩 증가한다.
9. `ONE`이 1이므로 `TWO`는 2, `THREE`는 3이다.
10. `(13 - 1) / 5`는 2이고, `(13 - 1) % 5`도 2이다.

#include <stdio.h>

int main() {
	FILE* filePtr;
	char filename[] = "example.txt";
	char buffer[100];

	// 파일을 읽기 모드로 열기
	filePtr = fopen(filename, "r");

	// 파일 열기 실패했는지 확인
	if (filePtr == NULL) {
		printf("파일을 열 수 없습니다: %s\n", filename);
		return 1;
	}

	// 파일에 문자열 읽기
	if (fgets(buffer, 100, filePtr) != NULL) {
		printf("example.txt 파일에서 읽은 내용: %s", buffer);
	}
	else {
		printf("파일에서 읽기 실패.\n");
	}

	// 파일 닫기
	fclose(filePtr);


	return 0;
}


// 결과 : example.txt 파일에서 읽은 내용: Hello, world!

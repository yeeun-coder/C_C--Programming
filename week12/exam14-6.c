#include <stdio.h>

int main() {
	FILE* file;
	char str1[150];

	// 파일을 읽기 모드로 열기
	file = fopen("twostring.txt", "r");
	if (file == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}

	// 파일에 2개의 문자열 읽기
	if (fgets(str1, sizeof(str1), file) == NULL) {
		printf("첫 번째 문자열을 읽는 데 실패했습니다.\n");
		fclose(file);
		return 1;
	}

	// 파일 닫기
	fclose(file);

	printf("twostring.txt 파일에 문자열 '%s'를 성공적으로 읽었습니다.\n", str1);
	return 0;
}


// 결과 : twostring.txt 파일에 문자열 'C language, Text File!!!'를 성공적으로 읽었습니다.

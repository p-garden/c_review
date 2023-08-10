#include <stdio.h>
int main() {
	char a;
	printf("대문자 입력: ");
	scanf("%c", &a);
	printf("소문자 출력: %c", a+'a' - 'A');


}
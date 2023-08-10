#include <stdio.h>
int main() {
	int a;
	char b;
	printf("입력: ");
	scanf("%d", &a);
	b = a;
	printf("출력(int)->%d\n", a);
	printf("출력(char)->%d\n", b);

}
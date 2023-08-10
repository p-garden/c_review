#include <stdio.h>
int main() {
	float a;
	printf("실수 입력: ");
	scanf("%f", &a);
	printf("반올림 정수 출력: %d", (int)(a+0.5));


}
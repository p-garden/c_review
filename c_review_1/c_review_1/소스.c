#include <stdio.h>
int main() {
	int a;
	printf("정수 입력(0~25) :");
	scanf("%d", &a);
	printf("%d번째 영어 대문자는 %c\n", a,'A'+a);


}
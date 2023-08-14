#include <stdio.h>
int main() {
	char a, b;
	scanf("%c", &a);
	b = ('a' <= a && a <= 'z') ? a - ('a' - 'A') : a;
	printf("%c", b);
}
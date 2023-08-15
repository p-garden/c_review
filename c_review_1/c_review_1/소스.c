#include <stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	if ('a' <= a && a <= 'z')
		printf("%c", a - ('a' - 'A'));
	else if ('A' <= a && a <= 'Z')
		printf("%c", a + ('a' - 'A'));
	else
		printf("%c", a);
	
	
}
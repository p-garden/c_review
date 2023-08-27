#include <stdio.h>
#include <string.h>
int main() {
	char a[100], b[50];
	scanf("%s", a);
	scanf("%s", b);
	if (strcmp(a, b) > 0) {
		strcat(a, b);
		printf("%s", a);
	}
	else {
		strcat(b, a);
		printf("%s", b);
	}
}
#include <stdio.h>
int main() {
	char a[20];
	int i;
	scanf("%s", a);
	for (i = 0; i < 20; i++) {
		if ('a' <= a[i] && a[i] <= 'z')
			printf("%c", a[i]);
	}
	return 0;
}

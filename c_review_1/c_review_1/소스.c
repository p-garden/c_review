#include <stdio.h>
void strcopy(char[], char[]);
int main() {
	char a[6], b[6];
	char *pa, *pb;
	for (pb = b; pb < b + 6; pb++)
		scanf("%c", pb);
	strcopy(a, b);
	for (pa = a; pa < a + 6; pa++)
		printf("%c", *pa);
	return 0;
}
void strcopy(char a[], char b[]) {
	char *pa, *pb;
	for (pa = a, pb = b; pa < a + 6; pa++, pb++) {
		*pa = *pb;
	}

}
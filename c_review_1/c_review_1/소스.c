#include <stdio.h>
#include <string.h>
int main() {
	int n,i,len,min=100;
	char a[101],b[101];
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++) {
		gets(a);
		len = strlen(a);
		if (min > len) {
			min = len;
			strcpy(b, a);
		}
	}
	printf("%s",b);
}

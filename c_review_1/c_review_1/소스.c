#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n, i,cnt=0;
	char *a;
	scanf("%d", &n);
	a = (char*)malloc((n+1) * sizeof(char));
	scanf("%s", a);
	for (i = 0; i < n-2; i++) {
		if (a[i] == 'c' && a[i + 1] == 'a' && a[i + 2] == 't') {
			cnt++;
			i += 2;
		}
	}
	printf("%d", cnt);
	free(a);
	return 0;
}
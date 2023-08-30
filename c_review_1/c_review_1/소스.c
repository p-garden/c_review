#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n, i,*a,tmp;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n-1; i++) {
		if (a[i] > a[i + 1]) {
			tmp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tmp;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
	free(a);
	return 0;
}
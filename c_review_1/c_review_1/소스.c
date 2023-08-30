#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n,*a,*b,i;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
		a[i] = i;
	b = (int*)malloc((n - 1) * sizeof(int));
	for (i = 0; i < n-1; i++) {
		a[i] = i;
		if (i >= n / 2)
			a[i]++;
	}
	for (i = 0; i < n - 1; i++)
		printf(" %d", a[i]);
	free(a);
	free(b);
	return 0;
}
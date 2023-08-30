#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n, *p,i,sum=0;
	scanf("%d", &n);

	p = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		sum += p[i];
	}
	printf("%d", sum);
	free(p);
	return 0;
}
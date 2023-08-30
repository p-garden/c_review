#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n, i,d,*p; 
	scanf("%d", &n);
	p = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &p[i]);
	scanf("%d", &d);
	p = (int*)realloc(p, (n-d)*sizeof(int));
	for (i = 0; i < n - d; i++)
		printf("%d\n", p[i]);
	free(p);
	return 0;
}
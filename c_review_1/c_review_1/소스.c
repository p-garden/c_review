#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	float  *p, max;
	int n, i; 
	scanf("%d", &n);

	p = (float  *)malloc(n * sizeof(float));
	scanf("%f", &p[0]);
	max = p[0];
	for (i = 1; i < n; i++) {
		scanf("%f", &p[i]);
		if (max < p[i])
			max = p[i];
	}
	printf("%.2f", max);
	free(p);
	return 0;
}
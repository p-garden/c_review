#include <stdio.h>
int arrsum(int*, int*);
int main() {
	int n, s, e, a[100],sum;
	int *pa;
	scanf("%d%d%d", &n, &s, &e);
	for (pa = a; pa < a + n; pa++)
		scanf("%d", pa);
	printf("%d", arrsum(a + s, a + e));
	return 0;
}
int arrsum(int*pa, int*pb) {
	int sum = 0;
	int *pc;
	for (pc = pa; pc <= pb; pc++) 
		sum += *pc;
	return sum;
}
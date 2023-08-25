#include <stdio.h>
void abc(int*, int);
int main() {
	int a[10], i;
	int *pa;
	for (pa = a; pa < a + 10; pa++)
		scanf("%d", pa);
	for (pa = a,i=10; pa < a + 10; pa++,i--) {
		abc(pa, i);
	}
	for (pa = a; pa < a + 10; pa++)
		printf(" %d", *pa);
	return 0;
}
void abc(int*pa, int n) {
	int max = 0,tmp;
	int *pb,*pos;
	for (pb = pa; pb < pa + n; pb++) {
		if (*pb > *pa) {
			tmp = *pa;
			*pa = *pb;
			*pb = tmp;
		}
	}
}
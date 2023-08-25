#include <stdio.h>
void addarray(int *, int *,int*, int);
int main() {
	int n, a[20], b[20], c[20];
	int *pa, *pb, *pc;
	scanf("%d", &n);
	for (pa = a; pa < a + n; pa++)
		scanf("%d", pa);
	for (pb = b; pb < b + n; pb++)
		scanf("%d", pb);
	addarray(a, b, c,n);
	for (pc = c; pc < c + n; pc++)
		printf(" %d", *pc);

	return 0;
}
void addarray(int*pa, int*pb, int*pc,int n) {
	int *a, *b, *c;
	for (a = pa, b = (pb+n-1), c = pc; a < pa + n; a++, b--, c++) {
		*c = *a + *b;
	} 
}
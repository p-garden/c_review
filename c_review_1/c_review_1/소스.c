#include <stdio.h>
typedef struct arg {
	int sco,rank;
}arg;
int rank(arg[], int);
int main() {
	arg a[10],*pa;
	int i;
	for (pa = a; pa < a + 10;pa++) 
		scanf("%d", &pa->sco);
	for (i = 0; i < 10; i++) {
		a[i].rank = rank(a, i);
	}
	for (pa = a; pa < a + 10; pa++) {
		if (pa->rank == 3)
			printf("%d ", pa->sco);
	}
	for (pa = a; pa < a + 10; pa++) {
		if (pa->rank == 7)
			printf("%d", pa->sco);
	}
}
int rank(arg a[], int n) {
	int i, cnt = 1;
	for (i = 0; i < 10; i++) {
		if ((a+n)->sco < (a+i)->sco)
			cnt++;
	}
	return cnt;
}
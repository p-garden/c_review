#include <stdio.h>
void abc(int[],int);
void cba(int[],int);
int main() {
	int n = 0, m = 0, a[10] = { 0 }, b[10] = {0}, tmp, i;
	int *pa, *pb;
	for (pa = a;; pa++) {
		scanf("%d", &tmp);
		if (tmp == 0)
			break;
		*pa = tmp;
		n++;
	}
	for (pb = b;; pb++) {
		scanf("%d", &tmp);
		if (tmp == 0)
			break;
		*pb = tmp;
		m++;
	}
	abc(a, n);
	abc(b, m);
	i = 0;
	for (pa = a, pb = b; i < n;) {
		if (*pa < *pb ) {
			printf("%d ", *pb);
			pb++;
		}
		else {
			printf("%d ", *pa);
			pa++;
		}
		i++;
	}
	printf("\n");
	cba(a, n);
	cba(b, m);
	i = 0;
	for (pa = a, pb = b; i < m;) {
		if (*pa > *pb) {
			printf("%d ", *pb);
			pb++;
		}
		else {
			printf("%d ", *pa);
			pa++;
		}
		i++;
	}
	
	return 0;
}
void abc(int a[],int n) {
	int *pa,*qa;
	int tmp;
	for (pa = a+n-1; pa >=a; pa--) {
		for (qa = a; qa < pa; qa++) {
			if (*qa < *(qa + 1)) {
				tmp = *qa;
				*qa = *(qa + 1);
				*(qa + 1) = tmp;
			}
		}
	}
}
void cba(int a[], int n) {
	int *pa, *qa;
	int tmp;
	for (pa = a + n - 1; pa >= a; pa--) {
		for (qa = a; qa < pa; qa++) {
			if (*qa > *(qa + 1)) {
				tmp = *qa;
				*qa = *(qa + 1);
				*(qa + 1) = tmp;
			}
		}
	}
}
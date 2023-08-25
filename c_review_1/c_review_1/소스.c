#include <stdio.h>
int add_to_k(int*, int*);
int main() {
	int n, d[100],sum=0;
	int *pd;
	scanf("%d", &n);
	for (pd = d; pd < d + n; pd++)
		scanf("%d", pd);
	for (pd = d; pd < d + n; pd++) {
		sum += add_to_k(d,pd);
	}
	printf("%d", sum);
	return 0;
}
int add_to_k(int *a, int*b) {
	int *pa;
	int sum = 0;
	for (pa = a; pa <= b; pa++) {
		sum += *pa;
	}
	return sum;

}
#include <stdio.h>
int add(int);
int main() {
	int x, y, n, i, sum=0;
	scanf("%d", &x);
	for (i = 1; i <= x; i++) {
		sum += add(i);
	}
	printf("%d", sum);
}
int add(x) {
	int z = x * (x + 1) / 2;
	return z;
}
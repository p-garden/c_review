#include <stdio.h>
int add(int, int);
int main() {
	int x, y,n,i,sum=0;
	scanf("%d", &n);
	for (i = 0; i <= n; ++i) {
		sum = add(sum, i);
	}
	printf("%d", sum);
}
int add(x, y) {
	int z = x + y;
	return z;
}
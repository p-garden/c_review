#include <stdio.h>
int add(int);
int main() {
	int x, y,n,i,sum;
	scanf("%d%d", &x, &y);
	sum = add(y) - add(x - 1);
	printf("%d", sum);
}
int add(x) {
	int z = x * (x + 1) / 2;
	return z;
}
#include <stdio.h>
int fun1(int);
int main() {
	int x;
	scanf("%d", &x);

	printf("%d", fun1(x));
}
int fun1(x) {
	int z = 2*x*x - 5*x+1;
	return z;
}
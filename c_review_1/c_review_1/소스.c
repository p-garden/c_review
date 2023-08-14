#include <stdio.h>
int main() {
	int m,r,d;
	scanf("%d", &m);
	r = m % 10 * 1000 + m / 10 % 10 * 100 + m / 100 % 10 * 10 + m / 1000;
	d = m > r ? m - r : r - m;
	printf("%d", d);
	



}
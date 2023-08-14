#include <stdio.h>
int main() {
	int n, h,m,s;
	scanf("%d", &n);
	h = n / 3600, n -= h * 3600;
	m = n / 60, n -= m * 60;
	s = n;
	printf("%d:%d:%d", h, m, s);

	



}
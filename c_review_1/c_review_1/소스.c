#include <stdio.h>
int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	m > n ? printf("%d\n%d", m/n,m%n) : printf("%d\n%d", n/m,n%m);

	



}
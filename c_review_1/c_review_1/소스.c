#include <stdio.h>
int main() {
	int m;
	scanf("%d", &m);
	(m / 100 == m / 10 % 10 && m / 10 % 10 == m % 10) ? printf("3") : (m / 100 != m / 10 % 10 && m / 10 % 10 != m % 10 && m / 100 != m % 10) ? printf("1") : printf("2");
	

	



}
#include <stdio.h>
int main() {
	int m;
	scanf("%d", &m);
	(m / 100 > m / 10 % 10 && m / 100 > m % 10) ? printf("%d", m / 100) : (m / 10 % 10 > m / 100 && m / 10 % 10 > m % 10) ? printf("%d", m / 10 % 10) : printf("%d", m % 10);

	

}
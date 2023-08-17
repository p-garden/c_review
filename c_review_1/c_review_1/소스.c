#include <stdio.h>
int main() {
	int m1,m2,n1,n2,i,j;
	scanf("%d%d", &m1, &m2);
	scanf("%d%d", &n1, &n2);
	for (i = n1; i <= n2; i++) {
		for (j = m1; j <= m2; j++) {
			printf(" %d", i*j);
		}
		printf("\n");
	}
}
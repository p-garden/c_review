#include <stdio.h>
int main() {
	int a,i,j;
	scanf("%d", &a);
	i = 0;
	while (i < a) {
		for (j = 1; j <= a; j++) {
			printf(" %d", (j + i) % 10);
		}
		printf("\n");
		i++;
	}
	
}
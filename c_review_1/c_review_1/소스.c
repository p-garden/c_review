#include <stdio.h>
int main() {
	int a,i,j,k;
	scanf("%d", &a);

	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			for (k = 1; k <= 6; k++) {
				if (i + j + k == a)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}
	
}
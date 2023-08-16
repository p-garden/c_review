#include <stdio.h>
int main() {
	int a,g,tmp,i,j;
	scanf("%d", &a);
	while (a>1 && a % 3 != 0) {
		for (i = 1; i <= a; i++) {
			if (i != 1 && i != a) {
				for (j = 0; j < a - i; j++)
					printf(" ");
				printf("X");
				for (j = 0; j < (i - 1) * 2 - 1; j++)
					printf("O");
				printf("X");
			}
			else {
				for (j = 0; j < a - i; j++)
					printf(" ");
				for(j = 0; j < (2 * i) - 1; j++)
					printf("X");
			}
			printf("\n");
		}
		scanf("%d", &a);
	}
}
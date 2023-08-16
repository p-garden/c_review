#include <stdio.h>
int main() {
	int a,i,j;

	scanf("%d", &a);

	for (i = 1; i <= (2*a-1); i++) {
		if (i <= a) {
			for (j = a; j > i; j--) 
				printf(" ");			
			for (j = 0; j < (i*2-1); j++)
				printf("*");
		}
		else {
			for (j = 0; j < (i - a); j++)
				printf(" ");
			for (j = 0; j < ((2 * a - 1) - (2 * (i - a))); j++)
				printf("*");
		}
		printf("\n");
	}
}
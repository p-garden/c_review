#include <stdio.h>
int main() {
	int a,i,j;
	scanf("%d", &a);
	for (i = a; i > 0; i--) {
		for (j = 0; j < (i*2-1) ; j++)
			printf("*");
		printf("\n");
	}
	
}
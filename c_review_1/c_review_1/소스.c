#include <stdio.h>
int main() {
	int a,i,j;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		for (j = 0; j <(2*i+1) ; j++)
			printf("*");
		printf("\n");
	}
	
}
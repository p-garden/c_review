#include <stdio.h>
int main() {
	int a,i,j,n=1;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		for (j = 0; j <= i; j++) {
			printf(" %d", n%10);
			n++;
		}
		printf("\n");
	}
		
}
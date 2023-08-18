#include <stdio.h>
int main() {
	int i,j;
	char  a[5];

	for (i = 0; i < 5; i++) {
		scanf("%c", &a[i]);
	}
	
	for (i= 5; i >0; i--) {
		for (j = 0; j < 5; j++) {
			printf("%c", a[(i +j)%5]);
		}
		printf("\n");
	}
}
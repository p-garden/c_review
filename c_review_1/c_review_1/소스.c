#include <stdio.h>
int main() {
	int i,j, a[3][2],sum;

	for (i = 0; i <3; i++) 
		for (j=0;j<2;j++)
			scanf("%d", &a[i][j]);

	for (i = 0; i < 3; i++) {
		sum = 0;
		for (j = 0; j < 2; j++) {
			sum += a[i][j];
		}
		printf("%d\n", sum);
	}

}
#include <stdio.h>
int main() {
	int i,j,tmp, a[5];

	for (i = 0; i <5; i++) 
		scanf("%d", &a[i]);

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4-i; j++) {
			if (a[j] >= a[j+1]) {
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%d\n", a[i]);

	
	
	
	
}
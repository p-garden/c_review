#include <stdio.h>
int main() {
	int n[5],i,max1,max2,min;


	for (i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}
	min = n[0];
	for (i = 0; i < 5; i++) {
		if (n[i] < min)
			min = n[i];
	}
	max1 = min, max2 = min;
	for (i = 0; i < 5; i++) {
		if (n[i] >= max1 && n[i] >= max2)
			max2 = max1, max1 = n[i];
		else if (n[i] >= max2 && n[i] <= max1)
			max2 = n[i];

	}
 	printf("%d\n%d", max1,max2);
}
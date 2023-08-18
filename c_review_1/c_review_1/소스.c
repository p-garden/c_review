#include <stdio.h>
int main() {
	int n[5],i,sum=0;
	float  avg;
	
	for (i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
		sum += n[i];
	}
	avg = sum / 5.0;

	for (i = 0; i < 5; i++)
		if (n[i] > avg)
			printf("%d\n", n[i]);
	
}
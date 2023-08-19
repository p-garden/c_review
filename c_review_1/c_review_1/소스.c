#include <stdio.h>
int main() {
	int a[10], b[10],i,s,e;
	s = 0, e = 9;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 2 == 1) {
			b[s] = a[i];
			s++;
		}
		else {
			b[e] = a[i];
			e--;
		}
	}
	for (i = 0; i < 10; i++) 
		printf("%d ", b[i]);
}
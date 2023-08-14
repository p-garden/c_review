#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%dTTHO %dTHO %dHUN %dTEN %d", n / 10000, (n / 1000 %10), (n / 100 %10), (n / 10%10), n % 10);



}
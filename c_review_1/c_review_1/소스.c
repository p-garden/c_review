#include <stdio.h>
int main() {
	int a,i,j,sum,tmp;
	scanf("%d", &a);
	while (a/10) {
		sum = 0;
		while (a) {
			tmp = a % 10;
			sum += tmp;
			a /= 10;
		}
		a = sum;
	}
	printf("%d", a);
}
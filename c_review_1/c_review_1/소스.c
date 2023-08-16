#include <stdio.h>
int main() {
	int a,b,tmp,i,gcd;
	scanf("%d%d", &a, &b);
	if (a > b) {
		tmp = a;
		a = b; 
		b = tmp;
	}
	for (i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	
	printf("%d", gcd);
}
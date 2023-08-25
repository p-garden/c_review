#include <stdio.h>
void gcdlcm(int,int,int *,int *);
int main() {
	int a, b,gcd,lcm;
	int *pgcd, *plcm;
	scanf("%d%d", &a, &b);
	pgcd = &gcd, plcm = &lcm;
	gcdlcm(a, b, pgcd, plcm);
	printf("%d %d", *pgcd, *plcm);
	return 0;
}
void gcdlcm(int a, int b, int* pa, int*pb) {
	int i,tmp,gcd,lcm;
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	for (i = 1; i <= a; i++) {
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	for (i = b;; i++) {
		if (i%a == 0 && i%b == 0) {
			lcm = i;
			break;
		}
	}
	*pa = gcd;
	*pb = lcm;
}
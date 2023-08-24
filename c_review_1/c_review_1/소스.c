#include <stdio.h>
int num_digit(int);
int convert_top(int, int);
int convert_bottom(int);
int main() {
	int n, i, n_cnt;
	scanf("%d", &n);
	n_cnt = num_digit(n);
	if (n_cnt % 2 == 1) {
		while (n) {
			n = convert_top(n, n_cnt);
			n_cnt -= 2;
		}
	}
	else {
		while (n)
			n = convert_bottom(n);
	}
	return 0;
}
int num_digit(n) {
	int dig = 0;
	while (n) {
		n /= 10;
		dig++;
	}
	return dig;
}
int convert_top(n, dig) {
	int n_10 = 1, i;
	for (i = 1; i < dig; i++)
		n_10 *= 10;
	n_10 /= 10;
	if (dig == 1)
		printf("*");
	else {
		if (('a' <= (n / n_10) && (n / n_10) <= 'z') || ('A' <= (n / n_10) && (n / n_10) <= 'Z'))
			printf("%c", n / n_10);
		else
			printf("*");
	}
	if (dig == 1)
		return 0;
	else
		return n % n_10;
}
int convert_bottom(n) {
	if (('a' <= (n % 100) && (n % 100) <= 'z') || ('A' <= (n % 100) && (n % 100) <= 'Z'))
		printf("%c", (n % 100));
	else
		printf("*");


	return (n / 100);

}

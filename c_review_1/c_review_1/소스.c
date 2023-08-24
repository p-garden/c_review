#include <stdio.h>
int add_digits(int);
int main() {
	int n, cur_sum, min, min_con, tmp;
	scanf("%d", &n);
	tmp = add_digits(n);
	while (tmp / 10) 
		tmp = add_digits(tmp);
	min = tmp;
	min_con = n;
	while (n >= 0) {
		cur_sum = add_digits(n);
			while (cur_sum / 10)
			cur_sum = add_digits(cur_sum);
		if (cur_sum < min) {
			min = cur_sum;
			min_con = n;
		}
		scanf("%d", &n);
	}
	printf("%d %d", min_con, min);
	return 0;
}

int add_digits (int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
#include <stdio.h>
int multiple(int, int);
int maximum(int, int);
int digit_maximum(int);
int main() {
	int n,m,k,i,max=0;
	scanf("%d%d%d", &n, &m, &k);
	for (i = n; i <= m; i++) {
		if (multiple(i,k) == 1) {
			if (max < digit_maximum(i))
				max = digit_maximum(i);
		}
		else {
			if (max < (i%k))
				max = i % k;
		}
	}
	printf("%d", max);
	return 0;
}
int multiple(int x, int y) {
	if (x%y == 0)
		return 1;
	else
		return 0;
}
int maximum(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int digit_maximum(int x) {
	int i,cur,max;
	max = x % 10;
	while (x) {
		cur = x % 10;
		x /= 10;
		max = maximum(max, cur);
	}
	return max;
}

#include <stdio.h>
int count(int, int);
int main() {
	int n, m, k, i, cnt[10] = {0};
	scanf("%d", &n);
	while (n > 0) {
		for (i = 0; i <= 9; i++) {
			cnt[i] += count(n, i);
		}
		scanf("%d", &n);
	}
	for (i = 0; i < 10; i++)
		printf("%d ", cnt[i]);
	return 0;
}
int count(int n, int m) {
	int cnt = 0;
	while (n) {
		if (n % 10 == m)
			cnt++;
		n /= 10;
	}
	return cnt;
}
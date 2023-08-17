#include <stdio.h>
int main() {
	int n,m,cnt,max,min,tmp;
	scanf("%d", &n);
	max = n, min = n;
	while (n) {
		m = 0, tmp = n;
		while (tmp) {
			m = tmp % 10;
			n *= 10;
			n += m;
			tmp /= 10;
		}
		tmp = n, cnt = 0;
		while (tmp) {
			if (tmp % 10 == 3)
				cnt++;
			tmp /= 10;
		}
		printf("%d %d ", n, cnt);
		if (n > max)
			max = n;
		if (n < min)
			min = n;
		scanf("%d", &n);
	}
	printf("\n%d %d", min, max);
}